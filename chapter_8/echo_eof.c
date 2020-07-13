// echo_eof.c -- 重复输入，直到文件结尾
#include <stdio.h>

int main(void)
{
    int ch; // 声明为整数的原因是因为 EOF 返回值超出了 char 类型的接收范围

    while ((ch = getchar()) != EOF) // EOF 是文件结尾符号的简写 end of file
    { // 使用键盘输入文件结尾时一般才从 Ctrl + z 在一行开头或任意位置的方式
        putchar(ch); // putchar() 函数可以直接处理 int 类型的数据
    }

    return 0;
}