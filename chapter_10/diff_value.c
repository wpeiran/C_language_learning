// 编写一个函数，返回储存在 double 类型数组中最大值和最小值的差值，并测试
#include <stdio.h>
double diff_val(double ar[], int n);

int main(void)
{
    printf("The array, maximum - minimum = %.1lf",
            diff_val((double [5]){43.2, 5332.43, 532.2, 2321.2, 4241.4}, 5));

    return 0;
}

// 返回数组中最大与最小值的差值
double diff_val(double ar[], int n)
{
    double min = ar[0];
    double max = ar[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }

    return max - min;
}