// 编写一个函数，把二进制字符串转换为一个数值。例如，有下面的语句： char * pbin = "01001001";
// 那么把 pbin 作为参数传递给该函数后，它应该返回一个 int 类型的值 25。
#include <stdio.h>
#include <string.h>
int bstoi(char * arr);

int main(void)
{
    char * pbin = "01001111";

    printf("The int = %d", bstoi(pbin));

    return 0;
}

// 把二进制的字符串转换成一个int类型值
int bstoi(char * arr)
{
    int i = 0;
    int num = 0;

    if ((strchr(arr, '\0') == NULL))
    {
        return EOF;
    }
    while (arr[i] == '0' || arr[i] == '1')
    {
        putchar(arr[i]);
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