// cypher2.c -- 替换输入的字母，非字母字符保持不变
#include <stdio.h>
#include <ctype.h>          // 包含 isalpha() 的函数原型
/* C 语言中 if 与 else 的配对规则是，如果没有花括号， else 与离他最近的 if 匹配，
除非最近的 if 被花括号括起来。

注意事项：为了保证 if else 语句正常工作，应该在使用时都添加花括号！！！*/
int main(void)
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))        // 如果是一个字符
            putchar(ch + 1);    // 显示该字符的下一个字符
        else                    // 否则
            putchar(ch);        // 原样显示
    }
    putchar(ch);                // 显示换行符

    return 0;
}