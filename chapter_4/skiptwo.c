// skiptwo.c -- 跳过输入中的前两个整数
// * 在printf()与scanf()中的作用是不一样的
#include <stdio.h>

int main(void)
{
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    return 0;
}