// 获取字符遇到 #号停止，然后报告空格、换行符、其他字符的数量
#include <stdio.h>
// #include <ctype.h>

int main(void)
{
    char ch;
    int space, new_line, other_char;

    space = new_line = other_char = 0;

    printf("Enter a text, # to end: \n");
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
        {
            new_line++;     // 使用递增运算符的变量，在使用前必须初始化
        }
        else if (ch == ' ')
        {
            space++;
        }
        else
        {
            other_char++;
        }
    }
    printf("space = %d new line = %d other char = %d\n",
            space, new_line, other_char);

    return 0;
}