// 编写一个程序，按顺序在屏幕上显示命令行中列出的所以文件。使用 argc 控制循环。
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;

    if (argc < 2)
    {
        printf("Usage: %s [filename]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    for (i = 1; i <= argc; i++)
    {
        puts(argv[i]);
    }
    puts("Done.");
    
    return 0;
}
