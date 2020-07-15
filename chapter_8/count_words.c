// 统计一个文件共有多少字符数，文件结尾之前
#include <stdio.h>

int main(void)
{
    int nums = 0;
    char ch;

    while ((ch = getchar()) != EOF)
    {
        nums++;
    }
    printf("sum of words is %d.", nums);

    return 0;
}