// 编写一个函数，接受两个 int 类型的参数：一个是值；一个是位的位置。
// 如果指定的位置为1，该函数返回1；否则返回0。
#include <stdio.h>
int check_bit(int, int);

int main(void)
{
    int bit = 9;
    int number = 4561;
    printf("The %d bit of the number is %d.", bit, check_bit(number, bit));

    return 0;
}

// 检查一个整数中某位的值是否为1
int check_bit(int n, int bn)
{
    if ((n >> (bn - 1)) & 01)
        return 1;
    else
        return 0;
}