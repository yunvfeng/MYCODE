#include <stdio.h>

void main()
{
    int i,j;
    int arr[1000] = {1};
    int num,carry = 0;
    int len = 1;

    for(i = 1;i <= 40;i++)
    {
        for(j = 0;carry||j < len;j++)
        {
            num = carry + arr[j] * i;
            arr[j] = num % 10;
            carry = num / 10;
            if(j == len)
            len++;
        }
        printf("\n%d!=",i);
        j = len;
        for(j--;j >= 0;j--)
        {

            printf("%d",arr[j]);
        }
    }
}