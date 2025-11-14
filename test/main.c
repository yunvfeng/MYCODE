// main.c
#include <stdio.h>
#include "math_utils.h" 

int main() {
    int x = 5;
    int y = 10;
    int result = add(x, y); 

    printf("The result is: %d\n", result);

    // --- 添加这行新代码 ---
    printf("Hello from GitHub! This is my first update.\n");
    // ---------------------

    return 0;
}