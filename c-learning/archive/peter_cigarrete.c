#include <stdio.h>

int main()
{
    int y;
    int yd;
    int n;

    scanf("%d %d",&y,&n);
    yd = y;

    while(yd >= n)
    {
        y += yd / n;
        yd = yd % n + yd / n;
    }
    printf("%d",y);

    return 0;
}