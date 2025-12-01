#include <stdio.h>
#include <string.h>

int main()
{
    char rx_data[] = "Set_Voltage:0220V_End";
    int i,size,num = 0;
    int started = 0;

    printf("原始数据是：%s\n",rx_data);

    //处理数据
    size = strlen(rx_data);
    for(i = 0;i < size;i++)
    {
        if(rx_data[i] <= '9'&&rx_data[i] >= '0')
        {
            num *= 10;
            num += (rx_data[i] - '0');
            started = 1;
        }
        else
        if(started)
        break;
    }

    printf("解析结果:%d\n",num);
    printf("验算结果:val+1=%d",num +1);
}
