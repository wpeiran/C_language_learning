// altnames.c -- 可移植整数类型名
#include <stdio.h>
#include <inttypes.h> // 支持可移植类型

int main(void)
{
    int32_t me32; // me32 是一个 32 位有符号整数型变量
    int32_t cd_sales; // 32 位整数类型

    // cd_sales INT32_C(445566) 使用inttypes.h头文件中定义的宏，来定义扩展的整型常量
    me32 = 45933945;
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %" PRId32 "\n", me32); 
    // printf("me32 = %d\n", me32); // 与使用宏命令等价（上一行代码）

    printf("Please enter a int: ");
    scanf("%" SCNd32, &cd_sales); // 宏命令用于读取数据
    // printf("CD sales = %10" PRId32 " units\n", cd_sales);
    printf("CD sales = %10d units\n", cd_sales); // 与上一行相等


    return 0;
}