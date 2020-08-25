// append.c -- 把文件附加到另一个文件末尾
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source, FILE *dest);
char * s_gets(char * st, int n);

int main(int argc, char * argv[])
{
    FILE *fa, *fs;      // fa 指向目标文件，fs 指向源文件
    int files = 0;      // 附加的文件数量
    // char file_app[SLEN]; // 目标文件名
    // char file_src[SLEN]; // 源文件名
    int ch;

    // puts("Enter name of destination file:");
    // s_gets(file_app, SLEN);
    // 检查命令行输入文件数量
    if (argc != 3)
    {
        printf("Usage: %s [filename]", argv[0]);
        exit(EXIT_FAILURE);
    }
    // 打开文件并检查是否重名
    if ((fa = fopen(argv[1], "a+")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }
    if (strcmp(argv[1], argv[2]) == 0)
    {
        fputs("Can't append file to itself\n", stderr);
        exit(EXIT_FAILURE);
    }
    if ((fs = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }
    // 添加文件到另一个文件
    append(fs, fa);
    if (ferror(fs) != 0)
    {
        fprintf(stderr, "Error in reading file %s.\n", argv[2]);
    }
    if (ferror(fa) != 0)
    {
        fprintf(stderr, "Error in writing file %s.\n", argv[1]);
    }
    fclose(fs);
    files++;
    printf("File %s appended.\n", argv[2]);

    // puts("Enter name of first source file (empty line to quit):");
    // while (s_gets(file_src, SLEN) && file_src[0] != '\0')
    // {
    //     if (strcmp(file_src, file_app) == 0)
    //     {
    //         fputs("Can't append file to itself\n", stderr);
    //     }
    //     else if ((fs = fopen(file_src, "r")) == NULL)
    //     {
    //         fprintf(stderr, "Can't open %s\n", file_src);
    //     }
    //     else
    //     {
    //         if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
    //         {
    //             fputs("Can't create input buffer\n", stderr);
    //             continue;
    //         }
    //         append(fs, fa);
    //         if (ferror(fs) != 0)
    //         {
    //             fprintf(stderr, "Error in reading file %s.\n", file_src);
    //         }
    //         if (ferror(fa) != 0)
    //         {
    //             fprintf(stderr, "Error in writing file %s.\n", file_app);
    //         }
    //         fclose(fs);
    //         files++;
    //         printf("File %s appended.\n", file_src);
    //         puts("Next file (empty line to quit):");
    //     }
    // }
    printf("Done appending. %d files appended.\n", files);
    rewind(fa);
    printf("%s contents:\n", argv[1]);
    while ((ch = getc(fa)) != EOF)
    {
        putchar(ch);
    }
    puts("\nDone displaying.");
    fclose(fa);

    return 0;
}

// 把一个文件的数据添加的另一个文件
void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE]; // 只分配一次

    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
    {
        fwrite(temp, sizeof(char), bytes, dest);
    }
}

// 获取一段字符串，并去除其中的 \n
char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');    // 查找换行符
        if (find)                   // 如果地址不是 NULL
        {
            *find = '\0';           // 在此处放置一个空字符
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }
    return ret_val;
}