// 使用for嵌套循环打印特定格式输出的字符
#include <stdio.h>

int main(void)
{
    int columns, rows;
    char ch = 'A';

    for (columns = 1; columns < 7; columns++)
    {
        for (rows = 0; rows < columns; rows++)
            printf("%c", ch++);
        printf("\n");
    }

    return 0;
}