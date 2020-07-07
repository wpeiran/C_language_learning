// 打印一个表格，每一行打印一个整数、该数的平方、该数的立方
#include <stdio.h>

int main(void)
{
    int upper_limit, lower_limit, rows;

    printf("Enter two integer upper and lower limits\n");
    printf("enter lower limit integer: ");
    scanf("%d", &lower_limit);
    printf("enter upper limit integer: ");
    scanf("%d", &upper_limit);

    printf("integer  square  cube\n");
    for (rows = lower_limit; lower_limit <= upper_limit; lower_limit++)
    {
        printf("%5d %6d %7d", lower_limit, lower_limit * lower_limit,
                 lower_limit * lower_limit * lower_limit);
        printf("\n");
    }
    return 0;
}