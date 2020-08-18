// 编写一个程序，生成100个1~100范围内的随机数，并以降序排列。
#include <stdio.h>
#include "random.h"
#define SIZE 100

int main(void)
{
    int arr[SIZE];
    int i;

    // 生成100个1~10之间的随机数
    for (i = 0; i < SIZE; i++)
    {
        arr[i] = random();
    }
    intsort(arr, SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}