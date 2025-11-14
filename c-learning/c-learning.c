#include <stdio.h>

int main()
{
    int i,j,num,c;
    for(i = 100;i < 1000;i++)
    {
        c = 0;
        num = i;

        while(num)
        {
            j = num % 10;
            c += j * j * j;
            num /= 10;
        }
        if(c == i)
        printf("%d\t",c);

    }
    
    return 0;
}