// 设计一个函数 chline(ch, i, j)，打印指定的字符 j 行 i 列。并测试。
#include <stdio.h>
void chline(char ch, int i, int j);

int main(void)
{
    char ch = '*';
    int i = 6;
    int j = 60;

    chline(ch, i, j);

    return 0;
}

void chline(char ch, int i, int j)
{
    int x, y;

    for (x = 1; x <= i; x++)
    {
        for (y = 1; y <= j; y++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}