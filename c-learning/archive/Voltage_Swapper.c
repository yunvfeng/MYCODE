#include <stdio.h>

int swap(int *p1,int *p2)
{
    int temp;
    int *p3 = &temp;
    *p3 = *p1;
    *p1 = *p2;
    *p2 = *p3;
}

int main()
{
    int v1,v2;
    int *p1 = &v1;
    int *p2 = &v2;

    scanf("%d %d",&v1,&v2);

    swap(p1,p2);

    printf("%d %d",v1,v2);
}