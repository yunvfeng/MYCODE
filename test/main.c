// main.c
#include <stdio.h>
#include "math_utils.h" // 引用“承诺”

int main() {
    int x = 5;
    int y = 10;
    int result = add(x, y); // 使用 "add" 函数

    printf("The result is: %d\n", result);
    return 0;
}