#include <stdio.h>

int main()
{
    int data[] = {10, 20, 15, 85, 90, 88, 20, 15, 18, 20, 95, 20, 10, 100, 105, 20, 10};
    int i,num = 0;

    for(i = 1;i < sizeof(data)/sizeof(int) - 1;i++)
    {
        if(data[i] > data[i-1]&&data[i]>data[i+1])
        {
            num++;
        }
    }
    
    printf("心跳%d次",num);
}