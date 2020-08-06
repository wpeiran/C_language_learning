// getsputs.c -- 使用 gets() 和 puts()
#include <stdio.h>
#define STLEN 8

int main(void)
{
    char words[STLEN]; // 声明字符数组并声明大小

    puts("Enter a string, please.");
    gets(words); // 典型用法
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");

    return 0;
}