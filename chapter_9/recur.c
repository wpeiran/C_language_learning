// recur.c -- 递归演示 -- C 允许函数调用它自己，这种调用过程称为递归。
#include <stdio.h>
void up_and_down(int);  // 声明函数原型

int main(void)
{
    up_and_down(1);

    return 0;
}

void up_and_down(int n)
{
    printf("level %d: n location %p\n", n, &n); // #1
    if (n < 4)
        up_and_down(n + 1);
    printf("Level %d: n location %p\n", n, &n); // #2
}