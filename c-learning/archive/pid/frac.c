#include <stdio.h>

void update_temperature(float *temp, float power)
{
    float *p = temp;
    *p = *temp - *temp*0.02 + power*0.3;
}
float pid_compute(float target, float current, float Kp, float Ki, float Kd, float *ptr_integral, float *ptr_prev_error)
{
    float output;
    float error = target - current;

    float Iout = Ki * error;
    float Pout = Kp * error;
    float Dout = Kd * ( error - *ptr_prev_error );

    *ptr_integral += Iout;

    output = *ptr_integral + Pout + Dout;
    *ptr_prev_error = error;

    if(output > 100)
    {
        *ptr_integral = output - 100;
        return 100;
    }
    if(output < - 100)
    {
        *ptr_integral = 0;
        return -100;
    }
    return output;

}