// larger_of.c -- 编写并测试一个函数 larger_of(),该函数把两个 double 类型变量的值替换为较大的值。
// 例如, larger_of(x, y) 会把 x 和 y 中较大的值重新复制给这两个变量。
#include <stdio.h>
void larger_of(double * a, double * b);

int main(void)
{
    double x = 45.454564;
    double y = 78.154165;

    printf("Original x = %lf and y = %lf\n", x, y);
    larger_of(&x, &y);
    printf("Now x = %lf and y = %lf\n", x, y);

    return 0;
}

void larger_of(double * a, double * b)
{
    if (*a > *b)
    {
        *b = *a;
    }
    else
    {
        *a = *b;
    }

}