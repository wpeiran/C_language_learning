// 编写一个程序，声明一个 int 类型的 3x5 二维数组，并用合适的值初始化它。该程序打印数组中的值，
// 然后再翻倍数组元素值，并显示各元素新值。编写两个函数一个显示数组内容，一个把元素值翻倍
#include <stdio.h>
#define ROWS 3
#define COLS 5
void display(int ar[][COLS], int n);
void double_arr(int ar[][COLS], int n);

int main(void)
{
    int arr[ROWS][COLS] = {
            {2, 4, 6, 7, 8},
            {1, 3, 5, 6, 8},
            {2, 2, 2, 2, 2}
    };

    display(arr, ROWS);
    double_arr(arr, ROWS);
    printf("\n");
    display(arr, ROWS);

    return 0;
}

// 显示二维数组中元素的内容
void display(int ar[][COLS], int n)
{
    int i, c;

    for (i = 0; i < n; i++)
    {
        for (c = 0; c < COLS; c++)
        {
            printf("%d, ", ar[i][c]);
        }
    }
}

// 把二维数组中的元素值翻倍
void double_arr(int ar[][COLS], int n)
{
    int i, c;

    for (i = 0; i < n; i++)
    {
        for (c = 0; c < COLS; c++)
        {
            ar[i][c] = ar[i][c] * 2;
        }
    }
}