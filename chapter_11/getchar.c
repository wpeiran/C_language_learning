// 编程练习题：1、2
#include <stdio.h>
#define SIZE 80
void getnchar(char * str, int n);

int main(void)
{
    char str[SIZE];
    int char_num = 20;
    int i;

    puts("Please enter one line :");
    getnchar(str, char_num);
    for (i = 0; i < char_num; i++)
    {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}

// 获取 n 个字符，并把它们储存在数组中
// 重构：在n个字符后停止，或在遇到第一个空白、制表符、换行符时停止
void getnchar(char * str, int n)
{
    int i;
    char temp;

    for (i = 0; i < n; i++)
    {
        temp = getchar();
        if (temp == ' ' || temp == '\t' || temp == '\n')
        {
            break;
        }
        else
        {
            str[i] = temp;
        }
    }
}