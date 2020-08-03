// zippo2.c --- 用于演示如何使用指向二维数组的指针
#include <stdio.h>

int main(void)
{
    int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}}; // 初始化二维数组
    int (*pz)[2];   // pz 指向一个内含两个 int 类型的数组
    pz = zippo;     // 把 zippo 的首元素（内含两个int类型元素的一维数组）的地址赋给 pz

    printf("   pz = %p,    pz + 1 = %p\n", pz, pz + 1);
    printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
    printf("  *pz = %p,   *pz + 1 = %p\n", *pz, *pz + 1);
    printf("pz[0][0] = %d\n", pz[0][0]);
    printf("  *pz[0] = %d\n", *pz[0]);
    printf("    **pz = %d\n", **pz);
    printf("        pz[2][1] = %d\n", pz[2][1]);
    printf("*(*(pz + 2) + 1) = %d\n", *(*(pz + 2) + 1));

    return 0;
}