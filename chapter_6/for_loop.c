// for_loop.c -- 使用 for 循环的计数循环
// for 循环把初始化、测试和更新组合在了一处
#include <stdio.h>

int main(void)
{
    const int NUMBER = 22;
    // int count;

    for (int count = 1; count <= NUMBER; count++) // 可在for循环中直接初始化计数变量
    {
        printf("Be my Valentine! %d\n", count);
    }
    

    return 0;
}