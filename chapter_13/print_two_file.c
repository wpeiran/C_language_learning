// 编写一个车程序打开两个文件。可以使用命令行参数或提示用户输入文件名。
// a 改程序依此打印每个文件的同一行，一直打印到较多文件的最后一行
// b 修改该程序，把行号相同的行打印成一行
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 300

int main(int argc, char const *argv[])
{
    FILE *out_1, *out_2;
    char line_1[SIZE]; // 用于存放一行字符串
    char line_2[SIZE]; // 用于存放一行字符串
    char *status_1, *status_2, *check;

    // 检查命令行参数
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    // 打开文件
    if ((out_1 = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n",
                argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((out_2 = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n",
                argv[2]);
        exit(EXIT_FAILURE);
    }
    //依此打印每行字符串
    status_1 = fgets(line_1, SIZE, out_1);
    status_2 = fgets(line_2, SIZE, out_2);
    while ((status_1 != NULL) || (status_2 != NULL))
    {
        if ((check = strchr(line_1, '\n')))
        {
            *check = '\0';
        }
        fputs(line_1, stdout);
        fputs(line_2, stdout);
        status_1 = fgets(line_1, SIZE, out_1);
        status_2 = fgets(line_2, SIZE, out_2);
    }
    puts("Done.");

    return 0;
}
