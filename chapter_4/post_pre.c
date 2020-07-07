// post_pre.c -- 前缀和后缀（递增运算符的差异）
#include <stdio.h>

int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++; // 后缀递增：使用 a 的值之后，递增 a
    pre_b = ++b;  // 前缀递增：使用 b 的值之前，递增 b
    printf("a   a_post  b   pre_b \n");
    printf("%ld %5d %5d %5d\n", a, a_post, b, pre_b);

    return  0;
}