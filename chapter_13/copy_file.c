// 编写一个文件拷贝程序，该程序通过命令行获取原始文件名和拷贝文件名。尽量使用标准I/O和二进制模式。
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024

int main(int argc, char const *argv[])
{
    FILE *fp1, *fp2;
    int ch;
    char buf[SIZE];

    if (argc != 3)
    {
        printf("Usage: %s [filename]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp1 = fopen(argv[1], "rb")) == NULL)
    {
        printf("Can't open %s", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((fp2 = fopen(argv[2], "wb")) == NULL)
    {
        printf("Can't open %s", argv[2]);
        exit(EXIT_FAILURE);
    }

    while (fread(buf, sizeof(char), SIZE, fp1))
    {
        fwrite(buf, sizeof(char), SIZE, fp2);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}
