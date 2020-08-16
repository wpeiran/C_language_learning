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

// 演示局部静态变量的使用
void trystat(void)
{
    int fade = 1;  // 自动变量-每次调用函数过后就会消失
    static int stay = 1; // 静态变量-在第一次调用时执行，之后一直保存在内存中

    printf("fade = %d and stay = %d\n", fade++, stay++);
}