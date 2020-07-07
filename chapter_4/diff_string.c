// diff_string.c -- 使用不同类型的字符串
#include <stdio.h>
#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40]; // 声明一个40字节的数组用于储存字符串

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}