// 编写一个函数，把两个数组中的相对应的元素相加，然后把结果储存到第 3 个数组中。
#include <stdio.h>
#define SIZE 4
void sum_arrs(int arr1[], int arr2[], int sum[], int n);
void display(int ar[], int n);

int main(void)
{
    int arr1[SIZE] = {2, 4, 5, 8};
    int arr2[SIZE] = {1, 0, 4, 6};
    int sum[SIZE];

    sum_arrs(arr1, arr2, sum, SIZE);
    printf("Now sum array: ");
    display(sum, SIZE);

    return 0;
}

// 把两个数组对应的元素求和并赋值给第三个元素
void sum_arrs(int arr1[], int arr2[], int sum[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }
}

// 打印 int 类型一维数组的值
void display(int ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d, ", ar[i]);
    }
}