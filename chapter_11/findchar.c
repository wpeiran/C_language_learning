// 设计一个与 strchr() 函数相同功能的函数
#include <stdio.h>
#define SIZE 50
char * findchar(char * str, char c);

int main(void)
{
    char str[SIZE];
    char c;
    char * find_c;

    fgets(str, SIZE, stdin);
    c = getchar();
    find_c = findchar(str, c);
    printf("The char index in string is %d", find_c-str);

    return 0;
}

char * findchar(char * str, char c)
{
    char * find = NULL;

    while (*str)
    {
        if (*str == c)
        {
            find = str;
            break;
        }
        str++;
    }

    return find;
}