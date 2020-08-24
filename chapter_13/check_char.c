// 编写一个程序，接受两个命令行参数。第1个参数是一个字符，第2个参数是文件名。
// 要求改程序只打印文件中包含给定字符的那些行。
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 256

// int main(int argc, char const *argv[])
// {
//     char fstr[SIZE];
//     FILE * fp;
//     int chr;

//     if (argc < 3)
//     {
//         fprintf(stderr, "Usage: %s [filename]\n", argv[0]);
//         exit(EXIT_FAILURE);
//     }
//     if ((fp = fopen(argv[2], "r")) == NULL)
//     {
//         fprintf(stderr, "Can't open %s\n", argv[1]);
//         exit(EXIT_FAILURE);
//     }
//     chr = *argv[1]; // 有潜在问题，字符中包含了空字符
//     // printf("%s %s\n\n", argv[1], argv[2]);
//     while (fgets(fstr, SIZE, fp))
//     {
//         if (strchr(fstr, chr))
//         {
//             fprintf(stdout, "%s", fstr);
//         }
//     }
//     fclose(fp);
//     puts("Bye.");

//     return 0;
// }

// 另一种方案
#include <stdio.h>
#include <stdlib.h>
#define BUF 256
int has_ch(char ch, const char * line);

int main(int argc, char const *argv[])
{
    FILE * fp;
    char ch;
    char line[BUF];

    if (argc != 3)
    {
        printf("Usage: %s character filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    ch = argv[1][0];
    if ((fp = fopen(argv[2], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    while (fgets(line, BUF, fp) != NULL)
    {
        if (has_ch(ch, line))
            fputs(line, stdout);
    }
    fclose(fp);


    return 0;
}

int has_ch(char ch, const char * line)
{
    while (*line)
        if (ch == *line++)
            return(1);
    return 0;
}