#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int req()//随机楼层生成
{
    return 1 + rand() % 10;
} 

int main()
{
    srand((unsigned int)time(NULL));
    int floar = 1;
    int request[11] = {0};
    int state;
    int reqst;
    int max,min;
    int i;

    //初始楼层请求
    reqst = 2 + rand() % 9;
    request[reqst] = 1;
    printf("有人按下了%d楼  ",reqst);

    state = 1;    
    max = 1;
    min = 10;

    while(1)
    {
        //到了指定楼层
        if(request[floar])
        {
        request[floar] = 0;
        //如果到了最高、最低，就重置最高、最低
        if(floar == max)
        max = 1;
        if(floar == min)
        min = 10;
        }
        

        //无请求
        if(request[1]+request[2]+request[3]+request[4]+request[5]+request[6]+request[7]+request[8]+request[9]+request[10] == 0)
        {
        printf("目前在%d楼  无请求,待机中\n",floar);
        state = 0;
        }
        else
        {
        printf("目前在%d楼  ",floar);
        if(state == 1)
        printf("up\n");
        if(state == -1)
        printf("down\n");
        }
        usleep(100000);

        //判断最高、最低层
        for(i = 1;i < 11;i++)
        {
            if(request[i] == 1)
            {
                if(i < min)
                min = i;
                if(i > max)
                max = i;
            }
        }

        //判断是否继续上升
        if (state == 1 || (state == 0 && max > floar)) 
        {
        if (max > floar) {
        state = 1; // 保持向上
        } else if (min < floar) {
            state = -1; // 上面空了，下面有人 -> 掉头向下
        } else {
            state = 0; // 上下都没人 -> 待机
        }
        }
        // 情况 B: 正在向下 (或者待机且下面有人)
        else if (state == -1 || (state == 0 && min < floar))
        {
        if (min < floar) {
            state = -1; // 保持向下
        } else if (max > floar) {
        state = 1; // 下面空了，上面有人 -> 掉头向上
        } else {
        state = 0; // 上下都没人 -> 待机
        }
        }
        //进行上升、下降
        if(state == 1)
        floar++;
        else if(state == -1)
        floar--;

        if(floar == 1)
        state = 1;
        else if(floar == 10)
        state = -1;

        
    }
}