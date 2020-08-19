// count.c -- 使用标准 I/O
#include <stdio.h>
#include <stdlib.h>  // 提供exit()的原型

int main(int argc, char * argv[])
{
    int ch;     // 读取文件时，储存每个字符的地方- 用int类型的变量储存 EOF
    FILE * fp;  // 指向文件类型的指针
    unsigned long count = 0;

    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE); // 结束这个函数，并返回结束值
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);  // 与 putchar(ch); 作用相同
        count++;
    }
    fclose(fp);
    printf("\nFile %s has %lu characters\n", argv[1], count);

    return 0;
}