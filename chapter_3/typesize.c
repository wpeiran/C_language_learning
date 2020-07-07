// typesize.c -- print type size
#include <stdio.h>

int main(void)
{
    // 打印在当前系统下不同类型值的大小
    printf("Type short has a size of %u bytes.\n", sizeof(short));
    printf("Type int has a size of %u bytes.\n", sizeof(int));
    printf("Type long has a size of %u bytes.\n", sizeof(long));
    printf("Type long long has a size of %u bytes.\n\n", sizeof(long long));
    printf("Type char has a size of %u bytes.\n\n", sizeof(char));
    printf("Type float has a size of %u bytes.\n", sizeof(float));
    printf("Type double a size of %u bytes.\n", sizeof(double));
    printf("Type long double a size of %u bytes.\n", sizeof(long double));

    return 0;
}