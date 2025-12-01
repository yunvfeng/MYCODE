#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int state = 0,timer = 0;

    while(1)
    {
        switch(state)
        {
            case 0:
            printf("state= %d ,timer = %d\n",state,timer);
            printf("南北绿灯，东西红灯\n\n");
            timer++;
            if(timer == 5)
            {
                state++;
                timer = 0;
            }
            break;

            case 1:
            printf("state= %d ,timer = %d\n",state,timer);
            printf("南北黄灯，东西红灯\n\n");
            timer++;
            if(timer == 2)
            {
                state++;
                timer = 0;
            }
            break;
            
            case 2:
            printf("state= %d ,timer = %d\n",state,timer);
            printf("南北红灯，东西绿灯\n\n");
            timer++;
            if(timer == 3)
            {
                state++;
                timer = 0;
            }
            break;

            case 3:
            printf("state= %d ,timer = %d\n",state,timer);
            printf("南北红灯，东西黄灯\n\n");
            timer++;
            if(timer == 2)
            {
                state = 0;
                timer = 0;
            }
            break;
        }

        usleep(50000);
        printf("\033[H\033[J");
    }
}