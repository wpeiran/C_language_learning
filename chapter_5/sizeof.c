// sizeof.c -- 使用 sizeof 运算符
// 使用 C99 新增的 %zd 转换说明 -- 如果编译器不支持 %zd，清将其改成 %u 或 %lu
#include <stdio.h>

int main(void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof(int);
    printf("n = %d, n has %u bytes; all ints have %u bytes.\n",
            n, sizeof n, intsize);

    return 0;
}