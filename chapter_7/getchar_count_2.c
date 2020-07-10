// 获取字符 # 停止，打印每个字符以及对应的 ASCII 码，每打印八个字符换一行
#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;

    printf("Enter a text, enter # to quit: \n");
    while ((ch = getchar()) != '#')
    {
        count++;
        printf("%c=%d(ASCII) ", ch, ch);
        if (count % 8 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}