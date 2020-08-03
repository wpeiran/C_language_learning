// zippo1.c --- 用于演示指针和多维数组的关系
#include <stdio.h>

int main(void)
{
    int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}}; // 初始化二维数组

    printf("   zippo = %p,    zippo + 1 = %p\n", zippo, zippo + 1);
    printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
    printf("  *zippo = %p,   *zippo + 1 = %p\n", *zippo, *zippo + 1);
    printf("zippo[0][0] = %d\n", zippo[0][0]);
    printf("  *zippo[0] = %d\n", *zippo[0]);
    printf("    **zippo = %d\n", **zippo);
    printf("        zippo[2][1] = %d\n", zippo[2][1]);
    printf("*(*(zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1));

    return 0;
}