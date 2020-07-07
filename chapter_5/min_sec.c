// min_sec.c -- 把秒数转换成分和秒-- 使用求模运算符 % （求余数）
#include <stdio.h>
#define SEC_PEC_MIN 60          // 1 分钟 60 秒

int main(void)
{
    int sec, min, left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf("%d", &sec);          // 读取秒数
    while (sec > 0)
    {
        min = sec / SEC_PEC_MIN;    // 截断分钟数 - C 中整数运算小数部分是直接截断丢弃掉的
        left = sec % SEC_PEC_MIN;   // 剩下的秒数
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");

    return 0;
}