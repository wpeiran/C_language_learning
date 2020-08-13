// 编写一个函数，把字符串中的内容用其反序字符串代替。反序排列字符串
#include <string.h>
#include <stdio.h>
#define SIZE 50
char * s_gets(char * st, int n);
void reverse_str(char str[]);

int main(void)
{
    char str[SIZE];

    puts("Enter a line string to reverse (EOF to quit):");
    while (s_gets(str, SIZE))
    {
        reverse_str(str);
        puts(str);
    }

    return 0;
}

// 反序排列字符串
void reverse_str(char str[])
{
    char temp;
    int j = strlen(str) - 1; // 字符串末尾索引
    int i;

    for (i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// 获取字符串并把\n替换为\0如果超出存储空间把缓冲区的数据清除
char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
        {
            i++;
        }
        if (st[i] == '\n')
        {
            st[i] = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }

    return ret_val;
}