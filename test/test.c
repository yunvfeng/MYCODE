#include <stdio.h>

int main()
{
    int a[] = {1,1,1,1};
    int i;

    for(i = 0;i < 4;i++)
    {
        
        a[0] = a[1] = a[2] = a[3] = 1;
        a[i] = 0;
        if(a[0])
        a[1] = 0;
        if(a[1])
        a[2] = 0;
        if(a[2])
        a[2] = 1;
        if(a[3])
        a[1] = 0;

        if(a[0] + a[1] + a[2] + a[3] == 3)
        goto fuck;
    }    

    fuck:
    if(!a[0])
    printf("a");
    if(!a[1])
    printf("b");
    if(!a[2])
    printf("c");
    if(!a[3])
    printf("d");
    return 0;
}