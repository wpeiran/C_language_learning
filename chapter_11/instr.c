// 编写一个名为 is_within()的函数，接受一个字符和一个指向字符串的指针作为函数的两个形参。
// 如果指定的字符在字符串中，该函数返回一个非零值（即为真）。否则，返回0（即为假）。
#include <stdio.h>
#define SIZE 80
int is_within(char c, char * str);

int main(void)
{
    char str[SIZE];
    char c;
    int val;

    while (1)
    {
        puts("Enter a char (quit to q):");
        if ((c = getchar()) == 'q')
            break;
        while (getchar() != '\n')
            continue;

        puts("Enter a line string:");
        fgets(str, SIZE, stdin);

        if (is_within(c, str))
        {
            printf("The %c char in string.\n", c);
            puts("\n");
        }
        else
        {
            printf("The %c char is not in string.\n", c);
            puts("\n");
        }
    }


    return 0;
}

int is_within(char c, char * str)
{
    int i = 0;

    while (*str)
    {
        if (*str == c)
        {
            i = 1;
            break;
        }
        str++;
    }

    return i;
}