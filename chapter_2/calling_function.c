// 定义两个函数，并在 main 函数中调用它们
#include <stdio.h>
void jolly(void); // 声明函数原型告诉编译器编译它们
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void) // 任何重复的代码都要想尽办法去简化掉
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}