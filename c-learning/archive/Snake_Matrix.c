#include <stdio.h>

int main()
{
    int map[3][4] = {
                    { 1,  2,  3,  4},
                    { 5,  6,  7,  8},
                    { 9, 10, 11, 12}
                    };

    int i,j;
    int state = 1;
    
    for(i = 0;i < 3;i++)
        {
            if(state)
            {
                for(j = 0;j < 4;j++)
                {
                    printf("%d ",map[i][j]);
                }
                state = 0;
            }
            else
            {
                for(j = 3;j >= 0;j--)
                {
                    printf("%d ",map[i][j]);
                }
                state = 1;
            }
        }
    
}