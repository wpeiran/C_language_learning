// 修改 count.c，要求提示用户输入文件名，并读取用户输入的信息，不使用命令行参数。
#include <stdio.h>
#include <stdlib.h>     // 提供 exit() 的原型

int main(void)
{
    int ch;             // 读取文件时，储存每个字符的地方
    FILE *fp;           // 文件指针
    char fn[30];        // 储存文件名
    unsigned long count = 0;

    puts("Please enter a file name: ");
    if (scanf("%30s", fn) == EOF)
    {
        printf("input NULL.");
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(fn, "r")) == NULL)
    {
        printf("Can't open %s\n", fn);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);         // 处理完数据一定要关闭文件
    printf("\nFile %s has %lu character\n", fn, count);

    return 0;
}
