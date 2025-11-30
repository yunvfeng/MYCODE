#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 5

int main()
{
    srand((unsigned int)time(NULL));

    int arr[SIZE] = {0};
    int i;
    int ave;

    for(i = 0;i < SIZE;i++)
    {
        arr[i] = 40 + rand() % 31 - 15;
    }
    while(1)
    {
        ave = 0;
        for(i = 0;i < SIZE - 1;i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[SIZE - 1] = 40 + rand() % 31 - 15;

        for(i = 0;i < SIZE;i++)
        {
            ave += arr[i];
        }
            ave /= SIZE;

        if(arr[SIZE - 1] == ave)
        {
            for(i = 0;i < arr[SIZE - 1];i++)
            {
                printf(" ");
            }
            printf("X\n");
        }
        if(arr[SIZE - 1] < ave)
        {
            for(i = 0;i < arr[SIZE - 1];i++)
            {
                printf(" ");
            }
            printf("*");
            for(i = 0;i < ave - arr[SIZE - 1] - 1;i++)
            {
                printf(" ");
            }
            printf("|\n");
        }
        if(arr[SIZE - 1] > ave)
        {
            for(i = 0;i < ave;i++)
            {
                printf(" ");
            }
            printf("|");
            for(i = 0;i < arr[SIZE - 1] - ave - 1;i++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        usleep(50000);
    }
}