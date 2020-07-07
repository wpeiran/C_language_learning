// 循环获取整数，在判断输入格式正确的情况下做运算处理
#include <stdio.h>
double operation(double x, double y);       // 声明函数原型

int main(void)
{
    double one, two;

    printf("Enter two float value: \n");
    while (scanf("%Lf %Lf", &one, &two) == 2)
    {
        // printf("(%.3Lf - %.3Lf) / (%.3Lf * %.3Lf) = %Lf\n", one, two, one, two,
        //  (one + two) / (one * two));
        printf("(%.3Lf - %.3Lf) / (%.3Lf * %.3Lf) = %Lf\n", one, two, one, two,
         operation(one, two));      // 调用函数
        printf("Enter two float value (q to quit): \n");
    }

    return 0;
}

double operation(double x, double y)        // 定义函数
{
    return (x -y) / (x * y);
}