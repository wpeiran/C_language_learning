// swap.c -- 使用指针解决交换函数的问题
#include <stdio.h>
void interchange(int * u, int * v);  // 声明函数,声明指针参数

int main(void)
{
    int x = 5, y = 10;

    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(&x, &y);  // 把地址发送给函数
    printf("Now x = %d and y = %d.\n", x, y);

    return 0;
}

void interchange(int * u, int * v)  // 定义函数
{
    int temp;

    // printf("Originally u = %d and v = %d.\n", *u, *v);
    temp = *u;      // temp 获得 u 所指向对象的值
    *u = *v;
    *v = temp;
    // printf("Now u = %d and v = %d.\n", *u, *v);
}