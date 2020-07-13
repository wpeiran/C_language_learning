// echo.c -- 重复输入 -- 用于演示单个字符的输入、输出
#include <stdio.h>

int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
    {
        putchar(ch);
    }

    return 0;
}