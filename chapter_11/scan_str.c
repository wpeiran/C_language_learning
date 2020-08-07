// scan_str.c -- 演示在 scanf() 函数中指定字段宽度的用法
#include <stdio.h>

int main(void)
{
    char name1[11], name2[11];
    int count;

    printf("Please enter 2 names.\n");
    count = scanf("%5s %10s", name1, name2);
    printf("I read the %d names %s and %s.\n", count, name1, name2);

    return 0;
}