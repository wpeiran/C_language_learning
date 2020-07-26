// proto.c -- 使用函数原型
#include <stdio.h>
// int imax();     // 如果不声明参数编译器将不能识别函数调用时的错误参数
int imax(int, int);     // 声明函数原型的参数可帮助编译器审查函数调用

int main(void)
{
    printf("The maximum of %d and %d is %d.\n",
            3, 5, imax(3, 5));
    printf("The maximum of %d and %d is %d.\n",
            3, 5, imax(3.0, 5.0));
    printf("The maximum of %d and %d is %d.\n",
            3, 5, imax(3.9, 5.4));

    return 0;
}

int imax(int n, int m)  // 函数定义的参数名不一定和函数原型的参数名一致
{
    return (n > m ? n : m);
}