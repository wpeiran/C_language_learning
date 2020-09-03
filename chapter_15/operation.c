// 编写一个程序，通过命令韩参数读取两个二进制字符串，对这两个二进制数使用~运算符、&运算符、|运算符
// 和^运算符，并以二进制字符串形式打印结果。
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // 提供 CHAR_BIT 的定义， CHAR_BIT 表示每字节的位数
#include <string.h>
#define SIZE 65

int bstoi(const char * arr);  // 把二进制字符串转换成整数
char * itobs(int, char *);  // 把整数转换成二进制字符串

int main(int argc, char const *argv[])
{
    int num1, num2;
    char arr[SIZE];

    if (argc != 3)
        exit(1);
    num1 = bstoi(argv[1]);
    num2 = bstoi(argv[2]);

    printf("~num1 = %s\n~num2 = %s\n", itobs(~num1, arr), itobs(~num2, arr));
    printf("num1 & num2 = %s\n", itobs(num1 & num2, arr));
    printf("num1 | num2 = %s\n", itobs(num1 | num2, arr));
    printf("num1 ^ num2 = %s\n", itobs(num1 ^ num2, arr));

    return 0;
}



// 把二进制的字符串转换成一个int类型值
int bstoi(const char * arr)
{
    int i = 0;
    int num = 0;

    if ((strchr(arr, '\0') == NULL))
    {
        return EOF;
    }
    while (arr[i] == '0' || arr[i] == '1')
    {
        if (arr[i] == '0')
        {
            num |= 0x0;
        }
        else
        {
            num |= 0x1;
        }
        i++;
        if (arr[i] != '\0')
            num <<= 1;
    }

    return num;
}

// 把一个整数转换成二进制字符串
char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);

    for (i = size - 1; i >= 0; i--, n >>= 1)
    {
        ps[i] = (01 & n) + '0';  // 整数前加0表示为八进制格式的数值，0x开头表示为十六进制格式的数值
    }
    ps[size] = '\0';

    return ps;
}