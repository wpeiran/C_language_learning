// put_put.c -- 自定义输出函数
#include <stdio.h>
void put1(const char *);
int put2(const char *);

int main(void)
{
    put1("If I'd as much money");
    put1(" as I could spend,\n");
    printf("I count %d characters.\n",
        put2("I never would cry old chairs to mend."));

    return 0;
}

// 类似 puts() 但不在末尾添加 \n
void put1(const char * string)
{
    while (*string)     // 与 *string != '\0'
    {
        putchar(*string++);
    }
}

// 与 puts() 一样，但多了一个返回统计字符数
int put2(const char * string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');

    return (count);
}