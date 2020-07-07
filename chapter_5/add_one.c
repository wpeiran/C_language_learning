// add_one.c -- 递增：前缀和后缀
#include <stdio.h>

int main(void)
{
    int ultra = 0, super = 0; // 同时初始化两个相同类型的变量

    while (super < 5)
    {
        super++;
        ++ultra;
        printf("super = %d, ultra = %d \n", super, ultra);
    }

    return 0;
    
}