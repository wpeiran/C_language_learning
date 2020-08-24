// 编写一个文件拷贝程序，提示用户输入文本文件名，并以改文件名作为原始文件名和输出文件名。
// 改程序要使用 ctype.h 中的 toupper() 函数，在写入到输出文件时把所以文本转换成大写。使用标准I/O和文本模式。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 30

int main(void)
{
   char source[SIZE];  // 用于存储文件名
   char outfile[SIZE]; // 用于存储输出文件名
   FILE *source_file_pointer, *outfile_pointer;
   char ch;     // 用于获取字符
   int status;
   char suffix[SIZE] = ".out";

   puts("Enter a file name:");
   status = scanf("%25s", source);
   // printf("%d %s", status, source);
   if (status == EOF)
   {
       puts("The input is invalid.");
       exit(EXIT_FAILURE);
   }
   strcpy(outfile, source);
   strcat(outfile, suffix);
   // printf("%s", outfile);
   if ((source_file_pointer = fopen(source, "r")) == NULL)
   {
       printf("Can't open %s", source);
       exit(EXIT_FAILURE);
   }
   if ((outfile_pointer = fopen(outfile, "w")) == NULL)
   {
       printf("Can't open %s", outfile);
       exit(EXIT_FAILURE);
   }

    while ((ch = getc(source_file_pointer)) != EOF)
    {
        putc(toupper(ch), outfile_pointer);
    }
    fclose(source_file_pointer);
    fclose(outfile_pointer);

    if ((outfile_pointer = fopen(outfile, "r")) != NULL)
    {
        while ((ch = getc(outfile_pointer)) != EOF)
        {
            putc(ch, stdout);
        }
    }
    puts("\nDone.");

    return 0;
}