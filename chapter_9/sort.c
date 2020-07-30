// sort.c -- 编写并测试一个函数，该函数以3个double变量的地址作为参数，把最小值放入第1个变量，
// 中间值放入第2个变量，最大值放入第3个变量。
#include <stdio.h>
void sort(double * a, double * b, double * c); // 声明函数原型

int main(void)
{
    double a = 787.12;
    double b = 45.454;
    double c = 452.12;

    printf("Original a = %lf and b = %lf and c = %lf\n", a, b, c);
    sort(&a, &b, &c);  // 调用函数
    printf("Now a = %lf and b = %lf and c = %lf\n", a, b, c);

    return 0;
}

void sort(double * a, double * b, double * c)  // 定义函数
{
    double min, middle, max;

    if (*a > *b && *a > *c)
    {
        max = *a;
        if (*b > *c)
        {
            middle = *b;
            min = *c;
        }
        else
        {
            middle = *c;
            min = *b;
        }
    }
    else if (*b > *a && *b > *c)
    {
        max = *b;
        if (*a > *c)
        {
            middle = *a;
            min = *c;
        }
        else
        {
            middle = *c;
            min = *a;
        }
    }
    else if (*c > *b && *c > *a)
    {
        max = *c;
        if (*b > *a)
        {
            middle = *b;
            min = *a;
        }
        else
        {
            middle = *a;
            min = *b;
        }
    }
    else
    {
        min = middle = max = *a;
    }

    *a = min;
    *b = middle;
    *c = max;
}