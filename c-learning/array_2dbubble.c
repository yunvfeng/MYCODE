#include <stdio.h>

int main()
{
    int arr[3][4] = {{3,4,1,5},
                    {9,18,2,23},
                    {98,13,45,56}};                     //初始化二维数组
    int size = sizeof(arr)/sizeof(arr[0][0]);           //数组内容个数
    int i,j,t;                                          //循环变量
    int temp;                                           //交换数组值临时变量

    for(i = 0;i < size - 1;i++)
    {
        for(j = 0;j < 3;j++)
        {
            for(t = 0;t < 3;t++)
            {
                if(arr[j][t] < arr[j][t+1])
                {
                    temp = arr[j][t];
                    arr[j][t] = arr[j][t+1];
                    arr[j][t+1] = temp;
                }
            }
            if(arr[j][t] < arr[j+1][0] && 2 != j)
                {
                    temp = arr[j][t];
                    arr[j][t] = arr[j+1][0];
                    arr[j+1][0] = temp;
                }
        }
    }

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
        {
            printf("%3d",arr[i][j]);
        }
    }

    return 0;
}