// 初始化一个 double 类型的数组，并把它的元素数据拷贝的其他三个数组。
// 拷贝方式上使用数组表示法、指针表示法（递增）、起始指针形参……
#include <stdio.h>
#define SIZE 5
void copy_arr(double tar[], double sou[], int n);
void copy_ptr(double * tar, double * sou, int n);
void copy_ptrs(double * tar, double * sou, double * end);
void display(double ar[], int n);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    // 显示原始数组元素的内容
    printf("Original source array: ");
    display(source, SIZE);
    printf("Original target1 array: ");
    display(target1, SIZE);
    printf("Original target2 array: ");
    display(target2, SIZE);
    printf("Original target3 array: ");
    display(target3, SIZE);

    copy_arr(target1, source, SIZE);
    copy_ptr(target2, source, SIZE);
    copy_ptrs(target3, source, source + SIZE);

    // 显示现在数组元素的内容
    printf("Now source array: ");
    display(source, SIZE);
    printf("Now target1 array: ");
    display(target1, SIZE);
    printf("Now target2 array: ");
    display(target2, SIZE);
    printf("Now target3 array: ");
    display(target3, SIZE);

    return 0;
}

// 使用带数组表示法的函数进行第一份拷贝
void copy_arr(double tar[], double sou[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        tar[i] = sou[i];
    }
}

// 使用指针表示法的函数进行第二份拷贝
void copy_ptr(double * tar, double * sou, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        *(tar++) = *(sou++);
    }
}

// 使用两个指针表示法（双指针）去拷贝第三个数组
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