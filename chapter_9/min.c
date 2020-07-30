// min.c -- 编程练习：设计一个函数 min(x, y),返回两个 double 类型值的较小值。
// 并在一个简单的驱动程序中测试该函数。
#include <stdio.h>
double min(double x, double y);  // 声明函数原型

int main(void)
{
    double minimum;
    double x = 45646.454;
    double y = 45643384.454;

    minimum = min(x, y);  // 调用函数
    printf("%lf and %lf, %lf is small.", x, y, minimum);

    return 0;
}

// 返回两个值中小的那个
double min(double x, double y)   // 定义函数
{
    double num = x;
    if (y < num)
    {
        num = y;
    }
    return num;
}