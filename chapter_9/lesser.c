// lesser.c -- 找出两个整数中较小的一个
// 使用 return 关键字返回值给主调函数
#include <stdio.h>
int imin(int, int);  // 声明函数原型时可以不声明形式参数（更佳的选择是加上形式参数）

int main(void)
{
    int evil1, evil2;

    printf("Enter a pair of integers (q to quit):\n");
    while (scanf("%d %d", &evil1, &evil2))
    {
        printf("The lesser of %d and %d is %d.\n",
                evil1, evil2, imin(evil1, evil2));
    printf("Enter a pair of integers (q to quit):\n");
    }
    printf("Bye.\n");

    return 0;
}

int imin(int n, int m)
{
    int min;

    if (n < m)
    {
        min = n;
    }
    else
    {
        min = m;
    }

    return min;
}