// string_length.c -- 编写一个类似 strlen() 的函数
#include <stdio.h>
int string_length(char * string);

int main(void)
{
    char str[80] = "This text use test function";

    printf("The string length %d.", string_length(str));

    return 0;
}

// 计算字符的长度，不包含空字符
int string_length(char * string)
{
    int n = 0;

    while (*string++)
    {
        // string++;  
        n++;
    }

    return n;
}