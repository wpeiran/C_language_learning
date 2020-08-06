// 比较数组和指针的区别
#include <stdio.h>

int main(void)
{
    // 数组的元素是变量（除非数组被声明为 const），但是数组名不是变量。
    char heart[] = "I love Tillie!";
    const char *head = "I love Millie!";
    // 两者主要的区别是：数组名 heart 是常量，而指针名 dead 是变量。
    int i;

    // 首先，两者都可以使用数组表示法：
    for (i = 0; i < 6; i++)
        putchar(heart[i]);
    putchar('\n');
    for (i = 0; i < 6; i++)
        putchar(head[i]);
    putchar('\n');

    // 其次，两者都能进行指针加法操作：
    for (i = 0; i < 6; i++)
        putchar(*(heart + i));
    putchar('\n');
    for (i = 0; i < 6; i++)
        putchar(*(head + i));
    putchar('\n');

    // 但是，只有指针表示法可以进行递增操作：
    while (*(head) != '\0')
    {
        putchar(*(head++));
    }

    return 0;
}