#include <stdio.h>

int main()
{
    int soc[] = {10,20,30,40,50};
    int des[5] = {0};
    int i;
    int *p1 = soc;
    int *p2 = des;

    for(i = 0;i < 5;i++)
    {
        *p2 = *p1 * 2;
        p2++;
        p1++;
    }

    for(i = 0;i < 5;i++)
    {
        printf("%d ",des[i]);
    }
}