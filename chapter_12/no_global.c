// no_global.c -- 不使用全局变量
#include <stdio.h>
void critic(int * units);

int main(void)
{
    int units;  // 使用局部变量去存放数据

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
        critic(&units);
    printf("You must have looked it up!\n");

    return 0;
}

void critic(int * units)    // 使用变量的指针去传递和修改变量的值
{
    printf("No luck, my friend. Try again.\n");
    scanf("%d", units);
}