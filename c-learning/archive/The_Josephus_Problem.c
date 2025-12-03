#include <stdio.h>

int main()
{
    int people[2][10] = {1,1,1,1,1,1,1,1,1,1,1,2,3,4,5,6,7,8,9,10};
    int i,step = 0;
    int total = 10;
    int gap = 3;

    for(i = 0;total > 1;i++)
    {
        if(people[0][i%10])
        step++;

        if(step == 3)
        {
            step = 0;
            people[0][i%10] = 0;
            people[1][i%10] = 0;
            total--;
        }
    }
    
    for(i = 0;i < 10;i++)
    {
    if(people[0][i])
    printf("%d",people[1][i]);
    }

    return 0;
}