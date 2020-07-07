// 把自己的年龄转换成天数，并打印出来
#include <stdio.h>

int main(void)
{
    int year, days;
    year = 30;
    days = year * 365;

    printf("My year is %d, as %d days.", year, days);

    return 0;
}