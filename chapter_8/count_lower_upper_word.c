// 读取字符流遇到#号终止程序。统计输入的大小写字母的个数，并打印。
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int lower_nums, upper_nums;

    lower_nums = upper_nums = 0;

    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
        {
            upper_nums++;
        }
        else if (islower(ch))
        {
            lower_nums++;
        }
    }
    printf("sum of lower case is %d, "
            "sum of upper case is %d.",
            lower_nums, upper_nums);

    return 0;
}