// 编写一个函数，接受一个 int 类型的参数，并返回该参数中打开位的数量。在一个程序中测试该函数。
#include <stdio.h>
#include <limits.h>

int check_open_bit(int n);

int main(void)
{
    int num;

    puts("Enter a number to see bits: (q to quit)");
    while (scanf("%d", &num))
    {
        printf("The number have %d open bits.\n", check_open_bit(num));
        puts("Next number :");
    }
    puts("Bye.");

    return 0;
}

// 查看一个整数中有多少位是打开的（1）并返回计数
int check_open_bit(int n)
{
    const int bits = CHAR_BIT * sizeof(int);
    int i;
    int total = 0;

    for (i = 0; i < bits; i++)
    {
        if (n & 01)
            total++;
        n >>= 1;
    }

    return total;
}