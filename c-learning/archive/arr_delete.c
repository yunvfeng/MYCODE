#include <stdio.h>
void main()
{
    int arr[] = {34,24,75,12,86,13};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,j;
    int num;

    printf("当前数组为:");
    for(i = 0;i < size;i++)
    {
        printf("%3d",arr[i]);
    }
    printf("\n");

    printf("input a number to delete it:");
    scanf("%d",&num);

    for(i = 0;i < size;i++)
    {
        if(arr[i] == num)
        {
            for(j = i;j < size - 1;j++)
            {
                arr[j] = arr[j+1];
            }
            break;
        }
    }
    if(i >= size)
    printf("Not found");
    else
    {
        printf("modified array is:");
        for(i = 0;i < size - 1;i++)
        {
            printf("%3d",arr[i]);
        }
    }
}