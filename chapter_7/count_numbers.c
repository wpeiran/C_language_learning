// 读取整数为0时终止，计算输入的奇数、整数个数与平均值并输出
#include <stdio.h>

int main(void)
{
    int num, odd_num, even_num, odd_sum, even_sum;

    odd_num = even_num = odd_sum = even_sum = 0;

    printf("Enter integers, enter 0 to quit: \n");
    scanf("%d", &num);
    while (num != 0)
    {
        if (num % 2 == 0)       // 偶数
        {
            odd_num++;
            odd_sum += num;
        }
        else
        {
            even_num++;
            even_sum += num;
        }
        printf("Enter next integer, 0 to quit: \n");
        scanf("%d", &num);
    }
    printf("Enter integer have %d odd number add %d ever number, "
            "odd mean is %.2f, even mean is %.2f\n", odd_num, even_num,
            (float) odd_sum / odd_num, (float) even_sum / even_num);

    return 0;
}