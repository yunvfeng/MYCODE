#include <stdio.h>
#define tgt 100

float update_temperature(float *temp, float power);
float pid_compute(float target, float current, float Kp, float Ki, float Kd, float *ptr_integral, float *ptr_prev_error);
int main()
{
    float current = 25,*pcurrent = &current;
    float target = 100;
    float Ki = 0.1;
    float Kp = 0.5;
    float Kd = 1;
    float output;
    float sumi = 0,*psumi = &sumi;
    float pcr = 0,*ptr_prev_error = &pcr;

    while(1)
    {
        
        output = pid_compute(target,current,Kp,Ki,Kd,psumi,ptr_prev_error);
        update_temperature(pcurrent,output);

        printf("%f   %f\n",current,output);
    }


    return 0;
}