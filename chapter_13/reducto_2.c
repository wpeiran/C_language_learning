// reducto_2.c -- 把文件压缩成原来的 1/3
// 不使用命令行参数，而是提供用户输入所需信息
#include <stdio.h>
#include <stdlib.h>     // 提供 exit() 的原型
#include <string.h>     // 提供 strcpy()、strcat() 的原型
#define LEN 40

int main(int argc, char const *argv[])
{
    FILE *in, *out;    // 声明两个指向 FILE 的指针
    int ch;             // 用于存放读取字符和接受 EOF
    char name[LEN];     // 存储输出文件名
    char sour[LEN];     // 用于存储原始文件名
    int count = 0;

    // 检查命令行参数
    // if (argc < 2)
    // {
    //     fprintf(stderr, "Usage: %s filename\n", argv[0]);
    //     exit(EXIT_FAILURE);
    // }
    // 获取文件名
    puts("Enter a file name:");
    if (scanf("%40s", sour) == EOF)
    {
        puts("Input Error!");
        exit(EXIT_FAILURE);
    }
    // 设置输入
    if ((in = fopen(sour, "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n",
                sour);
        exit(EXIT_FAILURE);
    }
    // 设置输出
    strncpy(name, sour, LEN - 5);    // 拷贝文件名
    name[LEN - 5] = '\0';
    strcat(name, ".red");               // 在文件名后添加 .red
    if ((out = fopen(name, "w")) == NULL)
    {               // 以写模式打开文件
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    // 拷贝数据
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);      // 打印3个字符中的第1个字符
    // 收尾工作
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files\n");

    return 0;
}
