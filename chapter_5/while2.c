// while2.c -- 注意分号的位置
#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n++ < 3);        // 在while判断语句后的单个分号为“空语句”，意味着什么都不做
    // {                    // 如果想让循环体什么都不做在c中可以使用单个分号表示空语句，或使用continue
        printf("n is %d\n", n);
    // }
    printf("That's all this program does.\n");

    return 0;
}