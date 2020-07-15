// 读取字符流，遇到EOF终止程序。打印每个字符与对应ascll码，每行十对；
// 特殊字符显示对应值，如换行符、制表符等
#include <stdio.h>

int main(void)
{
    int ch;
    int nums;

    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
            printf("('\\n' : %d) ", ch);
        else if (ch == '\t')
        {
            printf("('\\t' : %d) ", ch);
        }
        else
        {
            printf("('%c' : %d) ", ch, ch);
        }

        nums++;     // 记录打印次数
        if (nums % 10 == 0)      // 每打印是个字符换一次行
        {
            printf("\n");
        }
    }
    printf("Bye");

    return 0;
}