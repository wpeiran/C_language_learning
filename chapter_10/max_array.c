// 编写一个函数，返回存储在 ing 类型数组中的最大值，并在一个简单的程序中测试该函数
#include <stdio.h>
int max_arr(int ar[], int n);

int main(void)
{
    printf("Maximum of the int array are %d",
            max_arr((int [4]){36, 128, 55, 86}, 4));

    return 0;
}

// 计算 int 类型数组中的最大值
int max_arr(int ar[], int n)
{
    int max = ar[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }

    return max;
}