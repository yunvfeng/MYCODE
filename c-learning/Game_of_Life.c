#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h> 
#include <time.h>   

int main()
{
    srand((unsigned int)time(NULL));

    int show[22][42] = {0};
    int next_show[22][42] = {0};

    int i,j;
    int m,n,num = 0;
    
    //初始化
    for(i = 1;i < 21;i++)
    {
        for(j = 1;j < 41;j++)
        {
            if(rand() % 5 == 1)
            show[i][j] = 1;
        }
    }
    for(i = 1;i < 21;i++)
    {
        for(j = 1;j < 41;j++)
        {
            next_show[i][j] = show[i][j];
        }
    }

    //演化
    while(1)
    {   
        for(i = 1;i < 21;i++)
        {
        for(j = 1;j < 41;j++)
        {
            num = 0;
            for(m = i - 1;m <= i + 1;m++)
            {
                for(n = j - 1;n <= j + 1;n++)
                {
                    if(show[m][n])
                    {
                        num++;
                    }
                }

            }
            num -= show[i][j];
            next_show[i][j] = 0;

            if(num < 2||num > 3)
            {
                next_show[i][j] = 0;
            }
            else if(num == 2||num == 3&&show[i][j] == 1)
                next_show[i][j] = show[i][j];
            else if(num == 3&&show[i][j] == 0)
            {
                next_show[i][j] = 1;
            }
        }
        }

        for(i = 1;i < 21;i++)
        {
        for(j = 1;j < 41;j++)
        {
            show[i][j] = next_show[i][j];
        }

        }
        //打印
        for(i = 1;i < 21;i++)
        {
        for(j = 1;j < 41;j++)
        {
           if(show[i][j])
            printf(" #");
           else
           printf("  ");
        }
        printf("\n");
        }

        usleep(200000);

        printf("\033[H\033[J");

    }



}
