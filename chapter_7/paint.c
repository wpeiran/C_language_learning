// paint.c -- 使用条件运算符
// 条件运算符作为表达 if else 语句的一种便捷方式，该表达式使用 ？：条件运算符。
#include <stdio.h>
#define COVERAGE 350            // 每罐油漆可刷的面积（单位：平方英尺）

int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d", &sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0) ? 0 : 1); //条件表达式的格式
        printf("You need %d %s of paint.\n", cans,
                cans == 1 ? "can" : "cans"); // 条件表达式的书写格式
        printf("Enter next value (q to quit):\n");
    }

    return 0;
}