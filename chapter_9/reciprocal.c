// reciprocal.c -- 两数的调和平均数这样计算：先得到两数的倒数，然后计算两个倒数的平均值，
// 最后取计算结果的倒数。编写一个函数,接受两个 double 类型的参数，返回这两个参数的调和平均值。
#include <stdio.h>
double reciprocal(double x, double y);

int main(void)
{
    double x = 36.7;
    double y = 25.6;
    double value;

    value = reciprocal(x, y);
    printf("value is %lf", value);

    return 0;
}

double reciprocal(double x, double y)
{
    double re_x, re_y, re_average;

    re_x = (double) 1 / x;
    re_y = (double) 1 / y;
    re_average = (re_x + re_y) / (double) 2;

    return ((double) 1 / re_average);
}
