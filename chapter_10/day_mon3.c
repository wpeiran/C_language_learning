// day_mon3.c -- uses pointer notation
#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
    {
        // printf("Month %2d has %2d days.\n", index + 1, days[index]);
        printf("Month %2d has %2d days.\n", index + 1, *(days + index)); // 与 days[index] 相同
        // 指针表示法分析：days 是首元素的地址， days + index 是元素 days[index]的地址，
        // 而 *(days + index) 则是该元素的值，相当于 days[index]。
    }

    return 0;
}