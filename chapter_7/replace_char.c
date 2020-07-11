// 接受字符遇到 # 号终止，替换句号为感叹号，感叹号为两个感叹号，再打印替换次数
#include <stdio.h>

int main(void)
{
    char ch;
    int replace_nums = 0;

    printf("Enter some text: \n");
    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            ch = '!';
            replace_nums++;
        }
        else if (ch == '!')
        {
            putchar(ch);
            replace_nums++;
        }
        putchar(ch);
    }
    printf("\n");
    printf("Replace it %d times.", replace_nums);

    return 0;
}