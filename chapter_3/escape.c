// escape.c -- 使用转义序列
#include <stdio.h>

int main(void)
{
    float salary;

    printf("\aEnter your desired monthly salary:");
    printf(" $ ______\b\b\b\b\b\b");
    scanf("%f", &salary); // scanf()函数执行完后会自动换行
    printf("\n\t$%.2f a month is $%.2f a year.", salary,
            salary * 12.0);
    printf("\rGee!\n");

    return 0;
}