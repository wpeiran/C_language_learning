// 获取用户的工资等级与工作时长，计算工资总额、税金、净收入
#include <stdio.h>
#define BASE_1 8.75  // 8.75美元每小时
#define BASE_2 9.33  // 9.33美元每小时
#define BASE_3 10.00  // 10.00美元每小时
#define BASE_4 11.20  // 11.20美元每小时
#define OVERTIME 1.5  // 超过40个小时1.5倍工资
#define RATE1 0.15 // 前300美元15%的税率
#define RATE2 0.2 // 续150美元为20%的税率
#define RATE3 0.25 // 余下的为25%的税率
#define RATE_SUM1 300 * 0.15 // 第一阶梯税费
#define RATE_SUM2 150 * 0.2 // 第二阶梯税费

int main(void)
{
    float hours, work_sum, rates, net_income, base;
    int num;

    printf("******************************************************************\n"
           "Enter the number correspongding to the desired pay rate or action:\n"
           "1) $8.75/hr                           2) $9.33/hr\n"
           "3) $10.00/hr                          4) $11.20/hr\n"
           "5) quit\n"
           "******************************************************************\n");
    scanf("%d", &num);

    while (num != 5)
    {
        if (num >= 1 && num <= 4)
        {
            switch (num)  // 选择工资等级
            {
            case 1:
                base = BASE_1;
                break;
            case 2:
                base = BASE_2;
                break;
            case 3:
                base = BASE_3;
                break;
            case 4:
                base = BASE_4;
                break;
            }

            printf("Enter next number of hours worked per week: \n");
            scanf("%f", &hours);  // 获取每周工作时长

            if (hours > 40)     // 计算工资总额
            {
                work_sum = base * 40 + (base * OVERTIME) * (hours - 40);
            }
            else
            {
                work_sum = base * hours;
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

            printf("Your work sum = %.2f, rates = %.2f, net income = %.2f.\n\n",
                    work_sum, rates, net_income);
        }
        else if (num < 1 || num > 5)
        {
            printf("Please enter true number 1 ~ 5.\n\n");
        }
        printf("******************************************************************\n"
               "Enter the number correspongding to the desired pay rate or action:\n"
               "1) $8.75/hr                           2) $9.33/hr\n"
               "3) $10.00/hr                          4) $11.20/hr\n"
               "5) quit\n"
               "******************************************************************\n");
        scanf("%d", &num);
    }
    printf("Done.\n");

    return 0;
}