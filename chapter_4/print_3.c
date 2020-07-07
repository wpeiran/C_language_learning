// 使用转换说明和转换说明修饰符，打印输出自己想要的格式
#include <stdio.h>

int main(void)
{
    char name[40] = "wang peiran";
    float cash = 1562.276545;

    printf("The %s family just may be $%.2f richer!\n", name, cash);

    return 0;
}