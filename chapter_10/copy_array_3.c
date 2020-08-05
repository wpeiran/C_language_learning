// 把一个内含 7 个元素的数组中第 3 ~ 5 个元素拷贝至内含 3 个元素的数组中。使用合适的实际参数。
#include <stdio.h>
void copy_ptrs(double * tar, double * sou, double * end);
void display(double ar[], int n);

int main(void)
{
    double minarr[3];
    double arr[7] = {3.2, 5.3, 6.6, 3.5, 7.8, 8.4, 7.1};

    copy_ptrs(minarr, arr+2, arr+5);
    printf("Now arr: ");
    display(minarr, 3);

    return 0;
}

// 使用两个指针表示法（双指针）去拷贝数组
void copy_ptrs(double * tar, double * sou, double * end)
{
    while (sou < end)
    {
        *(tar++) = *(sou++);    // 加括号可以更清楚的表明运算关系
    }
}

// 打印数组中的元素
void display(double ar[], int n)
{
    int i;

    printf("{ ");
    for (i = 0; i < n; i++)
    {
        printf("%.1lf, ", ar[i]);
    }
    printf("}\n");
}