// reverse.c -- 倒序显示文件的内容-演示 fseek() ftell() 的用法
#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'  // DOS 文本文件中的文件结尾标识
#define SLEN 81

int main(void)
{
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, last;

    // printf("sizeof(file) = %d\n" "sizeof(ch) = %d\n"
        //    "sizeof(fp) = %d\n" "sizeof(count) = %d\n"
        //    "sizeof(last) = %d\n", sizeof(file), sizeof(ch),
        //    sizeof(fp), sizeof(count), sizeof(last));
    puts("Enter the name of the file to be processed:");
    scanf("%80s", file);
    if ((fp = fopen(file, "rb")) == NULL)
    {       // 二进制制度模式
        printf("reverse can't open %s\n", file);
        exit(EXIT_FAILURE);
    }

    fseek(fp, 0L, SEEK_END);  // 定位到文件末尾
    last = ftell(fp);
    printf("last = %d\n", last);
    for (count = 1L; count <= last; count++)
    {
        fseek(fp, -count, SEEK_END);    // 回退
        ch = getc(fp);
        if (ch != CNTL_Z && ch != '\r') // MS-DOS 文件结尾标识
            putchar(ch);
    }
    putchar('\n');
    fclose(fp);

    return 0;
}