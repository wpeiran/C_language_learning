// 编写一个函数接受一个字符串作为参数，并删除字符串中的空格。做一个程序中测试该函数，
// 使用循环读取输入行，直到用户输入一行空行。
#include <stdio.h>
#define SIZE 50
void del_blank(char * str);
char * s_gets(char * st, int n);

int main(void)
{
    char str[SIZE];

    puts("Enter a line string to delete blank (new line to quit):");
    while (s_gets(str, SIZE) && str[0] != '\0')
    { // s_gets()函数把\n替换成了\0,所以新行开始是\0就是没输入任何内容
        del_blank(str);
        puts(str);
    }
    puts("Bye.");

    return 0;
}


// 删除字符串中的空行
void del_blank(char * str)
{
    int i = 0;
    char * tstr = str;
    char temp;

    while (*tstr)
    {
        temp = *tstr;
        if (temp != ' ')
        {
            str[i] = temp;
            i++;
        }
        tstr++;
    }
    str[i] = '\0';

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