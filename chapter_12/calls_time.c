// 编写一个返回自身被调用次数的函数，并在一个循环中测试该函数
#include <stdio.h>
int calls_time(void);  // 返回被调次数

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("The function call time is %d\n", calls_time());
    }

    return 0;
}

int calls_time(void)
{
    static int time;

    return ++time;
}