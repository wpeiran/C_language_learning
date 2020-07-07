// floaterr.c -- 演示舍入错误
#include <stdio.h>

int main(void)
{
    float a, b;

    // 出现错误结果的原因是 float类型的数字通常只能保留6或7位有效数字。
    // 而加 1.0 实则是加在第21位，无法保存在 float 类型中。
    // b = 2.0e20 + 1.0;
    // a = b - 2.0e20;
    b = 2.0e4 + 1.0;
    a = b - 2.0e4; // 6/7个有效数字位之内的可以精准计算。
    printf("%f \n", a); 

    return 0;
}