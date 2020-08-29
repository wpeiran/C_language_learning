// 编写一个函数，用户提供月份号，该函数就返回一年中到垓月为止（包括垓月）的总天数。
#include <stdio.h>

struct month    // 声明结构模板
{
    char name[10];
    char abbrev[4];     // 字符串要预留一个空字符的空间
    int days;
    int monumb;
};

struct month months[12] =   // 初始化结构数组
{
    {"January", "jan", 31, 1},
    {"February", "feb", 28, 2},
    {"March", "mar", 31, 3},
    {"April", "apr", 30, 4},
    {"May", "may", 31, 5},
    {"June", "jun", 30, 6},
    {"July", "jul", 31, 7},
    {"August", "aug", 31, 8},
    {"September", "sep", 30, 9},
    {"October", "oct", 31, 10},
    {"November", "nov", 30, 11},
    {"December", "dec", 31, 12}
};

// 返回从 1 月到 m 月的总天数
// int days(struct month * mon ,int m);
// 另一种方式
int days(int month);

int main(void)
{
    int n;

    puts("enter a number of the month (1 - 12):");
    scanf("%d", &n);
    printf("days = %d", days(n));

    return 0;
}

// // 返回从 1 月到 m 月的总天数
// int days(struct month * mon ,int m)
// {
//     int sum = 0;
//     int i;

//     for (i = 0; i < m; i++)
//     {
//         sum += mon->days;
//         mon++;
//     }
//     return sum;
// }

// 另一个函数的定义
int days(int month)
{
    int index, total;
    if (month < 1 || month > 12)
    {
        return (-1);    // 错误的月份
    }
    else
    {
        for (index = 0, total = 0; index < month; index++)
            total += months[index].days;
        return (total);
    }

}