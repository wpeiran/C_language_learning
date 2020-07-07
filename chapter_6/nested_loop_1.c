// 使用嵌套循环打印字符
#include <stdio.h>

int main(void)
{
    int rows, columns;

    for (columns = 0; columns < 5; columns++)
    {
        for (rows = columns + 1; rows > 0; rows--)
            printf("$");
        printf("\n");
    }

    return 0;
}