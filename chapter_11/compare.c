// compare.c -- 比较两个字符串
#include <stdio.h>
#include <string.h> // strcmp() 函数的原型在该头文件中
#include <ctype.h>
#define ANSWER "GRANT"
// #define ANSWER "Grant"
#define SIZE 40
char * s_gets(char * st, int n);
void ToUpper(char * str);

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    // while (strcmp(try, ANSWER) != 0)
    ToUpper(try);
    // puts(try);
    while (strcmp(try, ANSWER))  // 非零值都为真
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
        ToUpper(try);
        // puts(try);
    }
    puts("That's right!");

    return 0;
}

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

// 把字符串格式化为大写
void ToUpper(char * str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}