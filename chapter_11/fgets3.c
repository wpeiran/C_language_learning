// fgets3.c -- 使用 fgets()
// 该程序读取输入行字符串，删除储存在字符串中的换行符，如果没有换行符，则丢弃数组装不下的字符
#include <stdio.h>
#define STLEN 10

int main(void)
{
    char words[STLEN];
    int i;

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
        {
            i++;
        }
        if (words[i] == '\n')
        {
            words[i] = '\0';
        }
        else  // 如果 word[i] == '\0' 则执行这部分代码
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
        puts(words);
    }
    puts("done");

    return 0;
}