#include <stdio.h>

int main()
{
    int num;
    int i,j,t,count1,count2 = -1;

    scanf("%d",&num);

    for(i = 2;i <= num;i++)
    {
        count1 = 0;
        for(j = 1;j < i;j++)
        if(i % j == 0)
        count1++;
        
        if(count1 > count2)
        {
            count2 = count1;
            t = i;
        }
    }

printf("%d有%d个因子",t,count2+1);

    return 0;
}