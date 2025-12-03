#include <stdio.h>
#include <string.h>

int main()
{
    int num = 0;
    int i;
    int size ;
    char data[] = "AAAABBBBBBBBBCCCCCDAAA"; 

    size = strlen(data);

    for(i = 1;i <= size;i++)
    {
        num++;

        if(data[i] != data[i-1])
        {
        printf("%d%c",num,data[i-1]);
        num = 0;
        }
    }
}