// 使用具有文件作用域、内部链接的变量在函数间传递数据
#include <stdio.h>
// static int mode;  // 模式类型
// static double distance; // 出行的距离
// static double fuel; // 消耗的燃料

int set_mode(int md) // 获取计算模式
{
    int mode;

    if (md == 0 || md == 1)
    {
        mode = md;
    }
    else  // 模式错误给出提示，并使用上次的模式
    {
        if (mode)
            printf("Invalid mode specified. Mode 1(US) used.\n");
        else
            printf("Invalid mode specified. Mode 0(metric) used.\n");
    }

    return mode;
}

void get_info(int mode, double * distance, double * fuel)    // 获取出行距离和消耗的燃料
{
    if (mode)
    {
        printf("Enter distance traveled in miles: ");
        scanf("%lf", distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", fuel);
    }
    else
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", fuel);
    }
}

void show_info(int mode, double * distance, double * fuel)   // 输出油耗信息
{
    double value;

    if (mode)
    {
        value = *distance / *fuel;
        printf("Fuel consumption is %.2lf miles per gallon.\n", value);
    }
    else
    {
        value = *fuel / (*distance / 100);
        printf("Fuel consumption is %.2lf liters per 100 km.\n", value);
    }

}