// 编写一个函数，用户提供月份号，该函数就返回一年中到垓月为止（包括垓月）的总天数。
// 用月份名的拼音代替月份（使用 strcmp()
#include <stdio.h>
#include <string.h>
#define SIZE 12

struct month    // 声明结构模板
{
    char name[10];
    char abbrev[4];     // 字符串要预留一个空字符的空间
    int days;
    int monumb;
};

struct month months[SIZE] =   // 初始化结构数组
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
int days(char *month, int size);

int main(void)
{
    char abbrmonth[4];

    puts("enter a string of the month (abbreviation):");
    scanf("%3s", abbrmonth);
    printf("days = %d", days(abbrmonth, SIZE));

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
int days(char *month, int size)
{
    int index, total;

    for (index = 0, total = 0; index < size; index++)
    {
        if (strcmp(months[index].abbrev, month) == 0)
        {
            for (int i = 0; i <= index; i++)
            {
                total += months[i].days;
            }
            break;
        }
        else
        {
            total = -1;
        }
    }

    return total;
}