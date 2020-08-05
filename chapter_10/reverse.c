// 编写一个函数，把 double 类型数组中的数据倒序排列，并测试
#include <stdio.h>
void display(double ar[], int n);
void reverse(double ar[], int n);
#define SIZE 10

int main(void)
{
    double arr[SIZE] = {32.5, 53.24, 531.5, 642.3, 53.2, 86.3, 213.35, 356.1, 53.1, 23.5};

    printf("Original array sort: ");
    display(arr, SIZE);

    printf("     Now array sort: ");
    reverse(arr, SIZE);
    display(arr, SIZE);

    return 0;
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

// 倒序排列数组元素
void reverse(double ar[], int n)
{
    int i = 0;          // i 值为数组第一个元素的下标
    int j = n - 1;      // j 值为数组最后一个元素的下标
    double temp;        // 元素互换数据时的临时存储变量

    for (; i < j; i++, j--)
    {   // i、j已经初始化了，所以表达式可以省略，但初始化表达式的分号不能省略
        temp = ar[i];
        // printf("%.2lf ", temp);
        ar[i] = ar[j];
        // printf("%.2lf ", ar[i]);
        ar[j] = temp;
        // printf("%.2lf \n", ar[j]);

    }
}
