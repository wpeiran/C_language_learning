// 声明、定义并调用函数
#include <stdio.h>
double cube(double num); // 函数原型声明

int main(void)
{
    double fl;

    printf("Enter a double float to find the cube: ");
    scanf("%Lf", &fl);
    printf("%Lf cube are %Lf", fl, cube(fl));

    return 0;
}

double cube(double num)
{
    double value;
    value = num * num * num;

    return value;
}