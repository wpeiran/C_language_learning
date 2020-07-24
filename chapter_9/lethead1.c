// 演示创建、定义和调用函数
#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);     // 函数原型 (分号表明实在声明函数，而不是定义函数)

int main(void)
{
    starbar();      // 调用函数
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();      // 调用函数

    return 0;
}

void starbar(void)      // 定义函数
{
    int count;

    for (count = 1; count <= WIDTH; count++)
    {
        putchar('*');
    }
    putchar('\n');
}