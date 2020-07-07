// 把分钟（用户输入）转换成小时与分钟显示
#include <stdio.h>
#define MIN_TO_HOUR 60

int main(void)
{
    int min, hour, c_min; // 获取用户输入的时间

    printf("This program converts minute to hour and minute.\n");
    printf("Enter a number of minute (<= 0 to quit): \n");
    scanf("%d", &min);
    while (min > 0)
    {
        hour = min / MIN_TO_HOUR; // 求出有多少个小时
        c_min = min % MIN_TO_HOUR; // 求出余下的分钟

        printf("%d minute equal to %d hour %d minute.\n", min, hour, c_min);
        printf("Next number ? ");
        scanf("%d", &min);
    }
    
    return 0;
}