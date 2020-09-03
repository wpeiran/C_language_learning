// 编写一个函数，把一个 unsigned int 类型值中的所以位向左旋转指定数量的位。例如，totate_1(x, 4)
// 把x中所以的位向左移动4个位置，而且从最左端移除的位重新出现在右端。把高阶位移出放入低阶位。
#include <stdio.h>
#include <limits.h>

unsigned int rotate_1(unsigned int x, int n);

int main(void)
{
    unsigned int num = 555555555;
    int mov_num = 10;

    printf("sizeof(unsigned int) = %d\n", sizeof(unsigned int));
    printf("rotate_(%d, %d) = %d\n", num, mov_num, rotate_1(num, mov_num));

    return 0;
}


unsigned int rotate_1(unsigned int x, int n)
{
    const int bits = CHAR_BIT * sizeof(unsigned int);
    int temp;
    int i;

    for (i = 0; i < n; i++)
    {
        temp = (x >> (bits - 1)) & 01;
        x <<= 1;
        x = x | temp;
    }

    return x;
}