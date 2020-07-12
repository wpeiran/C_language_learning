// 读取输入的字符遇到#号停止，计算 ei 出现的次数并打印出来
#include <stdio.h>

int main(void)
{
    char ch, prv;
    int count = 0;

    prv = 0;

    printf("Enter some text, count 'ei', # to quit: \n");
    while ((ch = getchar()) != '#')
    {
        if (prv == 'e' && ch == 'i')
        {
            count++;
        }
        prv = ch;
    }
    printf("'ei' count = %d times.", count);

    return 0;
}