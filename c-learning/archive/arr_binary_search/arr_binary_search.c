#include <stdio.h>

void main (void)
{
    int a,i,j,temp;
    int num[15] = {81,45,234,65,157,547,132,25,876,23,13,876,455,76,35};
    int size = sizeof(num)/sizeof(num[0]);
    int begin,end,mid;
    //int begin = 0,end = size - 1,mid;

    for(i = 0;i < size;i++)
    {
        for(j = 0;j < size - 1;j++)
        {
            if(num[j]>num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    fuck:
    begin = 0,end = size - 1;
    printf("input a number to find it's position:\n");
    scanf("%d",&a);

    while(begin <= end)
    {
        mid = (begin + end) / 2;

        if(num[mid] == a)
        {
        printf("you've found it,it's position is: %d",mid + 1);
        break;
        }
        else if(num[mid] > a)
        end = mid - 1;
        else
        begin = mid + 1;
        
    }

    if(!(begin <= end))
    {
        printf("Not found\n");
        goto fuck;
    }

}