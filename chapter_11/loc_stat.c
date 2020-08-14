// loc_stat.c -- 使用局部静态变量
#include <stdio.h>
void trystat(void);

int main(void)
{
    int count;

    for (count = 1; count <= 3; count++)
    {
        printf("Here comes iteration %d:\n", count);
        trystat();
    }

    return 0;
}

// 演示局部静态变量的使用场景
void trystat(void)
{
    int fade = 1; // 每次调用本函数都会初始化 fade
    // stay只在编译strstat()时被初始化一次。如果未显式初始化静态变量，它们会被初始化为0
    static int stay = 1;

    printf("fade = %d and stay = %d\n", fade++, stay++);
}