// 使用嵌套循环打印字母
#include <stdio.h>

int main(void)
{
    int columns, rows;
    char ch;

    for (columns = 1; columns < 7; columns++)
    {
        for (ch = 'F', rows = 0; rows < columns; rows++)
            printf("%c", ch--);
        printf("\n");
    }

    return 0;
}