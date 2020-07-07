// 使用嵌套循环打印金字塔格式的字母输出
#include <stdio.h>

int main(void)
{
    char ch = 'A';
    int col, rows, columns;
    char input_char;

    printf("Enter a capital: ");
    scanf(" %c", &input_char);
    columns = input_char - ch;
    // printf("%d\n", columns);

    for (col = 1; col <= columns; col++)                  // 根据输入的字母决定打印多少行
    {
        for (rows = 1; rows  <= columns - col; rows++)        // 对应每行打印多少空格
            printf(" ");

        for (rows = 0; rows < col; rows++)
            printf("%c", ch + rows);

        for (rows = col - 2; rows >= 0; rows--)
            printf("%c", ch + rows);

        printf("\n");
    }

    return 0;
}