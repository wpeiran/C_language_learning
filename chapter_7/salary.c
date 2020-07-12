// 根据用户输入的每周工作时长，计算总收入、税费、净收入
#include <stdio.h>
#define BASE 1000 // 1000美元每小时
#define OVERTIME 1.5 * 1000 // 超过40个小时1.5倍工资
#define RATE1 0.15 // 前300美元15%的税率
#define RATE2 0.2 // 续150美元为20%的税率
#define RATE3 0.25 // 余下的为25%的税率
#define RATE_SUM1 300 * 0.15 // 第一阶梯税费
#define RATE_SUM2 150 * 0.2 // 第二阶梯税费

int main(void)
{
    float hours, work_sum, rates, net_income;

    printf("Enter the number of hours worked per week: ");
    scanf("%f", &hours);

    if (hours > 40)     // 计算工资总额
    {
        work_sum = BASE * 40 + OVERTIME * (hours - 40);
    }
    else
    {
        work_sum = BASE * hours;
    }

    if (work_sum <= 300) // 计算税金
    {
        rates = work_sum * RATE1;
    }
    else if (work_sum <= 450)
    {
        rates = RATE_SUM1 + (work_sum - 300) * RATE2;
    }
    else
    {
        rates = RATE_SUM1 + RATE_SUM2 + (work_sum - 450) * RATE3;
    }

    net_income = work_sum - rates; // 净收入

    printf("Your work sum = %.2f, rates = %.2f, net income = %.2f.",
            work_sum, rates, net_income);

    return 0;
}