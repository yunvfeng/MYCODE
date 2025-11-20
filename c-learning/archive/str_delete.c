#include <stdio.h>
#include <string.h>

int main()
{
    int len = 0;
    int i,j;
    char arr[100] = {0};
    
    scanf("%[^\n]s",arr);
    len = strlen(arr);
    for(i = 0;i < len;i++)
    {
        if(arr[i] >= '0' && arr[i] <= '9')
        {
            for(j = i;j < len;j++)
            arr[j] = arr[j+1];
            i--;
        }
    }
    printf("%s",arr);
    return 0;
}