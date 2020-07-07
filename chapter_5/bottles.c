// 递增和递减运算符有很高的优先级仅次于圆括号。
// 但使用时要千万注意它的位置（前缀还是后缀），这决定了它在表达式中何时求值
// 如果n++是表达式的一部分,可将其视为"先使用n,再递增";而++n则表示"先递增n,再使用n".

#include <stdio.h>
#define MAX 100

int main(void)
{
    int count = MAX + 1;

    while (--count > 0)
    {
        printf("%d bottles of spring water on the wall, "
                "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }

    return 0;
}