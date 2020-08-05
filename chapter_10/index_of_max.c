// 编写一个函数，返回储存在 double 类型数组中最大值的下标，并测试
#include <stdio.h>
int index_of_max(double ar[], int n);

int main(void)
{
    printf("The index of max is %d",
            index_of_max((double [5]){1.5, 3.5, 6.4, 33.2, 3.5}, 5));

    return 0;
}

// 返回储存在 double 类型数组中最大值的下标
int index_of_max(double ar[], int n)
{
    int indmax = 0;
    int i;
    double maxnum = ar[0];

    for (i = 1; i < n; i++)
    {
        if (ar[i] > maxnum)
        {
            maxnum = ar[i];
            indmax = i;
        }
    }

    return indmax;
}