// 初始化一个 double 类型的二维数组，使用一个拷贝函数把该数组中的数据拷贝至另一个二维数组
// （因为二维数组时数组的数组，所以可以使用处理一维数组的拷贝函数来处理数组中的每个子数组）
#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy_arr(double tar[], double sou[], int n);
void display(double ar[], int n);


int main(void)
{
    double arr2d[ROWS][COLS] = {
                {32.5, 53.1, 64.3, 64.3, 64.4},
                {45.34, 23.4, 53.6, 77.2, 75.4},
                {12.1, 45.7, 78.5, 66.3, 45.3}
    };
    double dou2d[ROWS][COLS];
    int i;

    for (i = 0; i < ROWS; i++)
    {
        copy_arr(dou2d[i], arr2d[i], COLS);
    }

    printf("Now dou2d array: \n");
    for (i = 0; i < ROWS; i++)
    {
        display(dou2d[i], COLS);
    }

    return 0;
}

// 拷贝一维 double 类型数组的数据到另一个数组
void copy_arr(double tar[], double sou[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        tar[i] = sou[i];
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