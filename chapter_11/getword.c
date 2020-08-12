// 设计并测试一个函数，从一行输入中把一个单词读入一个数组中，并丢弃输入行中的其余字符。
// 该函数应该跳过第1个非空白字符前面的所有空白。将一个单词定义为没有空白、制表符或换行符的字符序列。
// 第2个参数限定输入的字符长度
#include <stdio.h>
char * getword(char str[], int n);

int main(void)
{
    char str[20];
    int word_n = 8;

    puts("Enter a word:");
    getword(str, word_n);
    puts(str);

    return 0;
}

// 获取一个单词，并保存在数组中，不获取有效字符前后的空白字符
char * getword(char str[], int n)
{
    int i = 0;
    char * ret_pot;

    ret_pot = fgets(str, n, stdin);
    if (ret_pot)
    {
        while (str[i] != '\n' && str[i] != '\0')
        {
            i++;
        }
        if (str[i] == '\n')
        {
            str[i] = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }

    return ret_pot;
}