// pound.c -- 定义一个带一个参数的函数
#include <stdio.h>
void pound(int n);      // ANSI 函数原型说明

int main(void)
{
    int times = 5;
    char ch = '!';      // ASCII 码是 33
    float f = 6.0f;

    pound(times);       // int 类型的参数
    pound(ch);          // 和 pound((int)ch); 相同
    pound(f);           // 和 pound((int)f); 相同

    return 0;
}

void pound(int n)       // ANSI 风格函数头
{                       // 表明该函数接收一个 int 类型的参数
    while (n-- > 0)
        printf("#");    // 只有一行语句的 while 循环可以不加 {}，以第一个 ；结束循环
    printf("\n");
}