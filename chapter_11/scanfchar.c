// 设计并测试一个函数，从一行输入中把一个单词读入一个数组中，并丢弃输入行中的其余字符。
// 该函数应该跳过第1个非空白字符前面的所有空白。将一个单词定义为没有空白、制表符或换行符的字符序列。
#include <stdio.h>
void getword(char str[]);

int main(void)
{
    char str[20];

    puts("Enter a word:");
    getword(str);
    puts(str);

    return 0;
}

// 获取一个单词，并保存在数组中，不获取有效字符前后的空白字符
void getword(char str[])
{
    scanf(" %s", str);
    while (getchar() != '\n')
    {
        continue;
    }
}