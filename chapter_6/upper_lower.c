// 获取用户输入的两个整数（上限、下限整数），计算上下限范围内所有整数的平方和病显示计算结果
#include <stdio.h>

int main(void)
{
    int upper, lower, sums, num;
    sums = 0;

    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);
    while (lower < upper)
    {
        for (num = lower; num <= upper; num++)
            sums += num * num;
        printf("The sums of the squares from %d to %d is %d\n", lower, upper, sums);
        printf("Enter next set of limits: ");
        scanf("%d %d", &lower, &upper);
    }
    printf("Done");

    return 0;
}