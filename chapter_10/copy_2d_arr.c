// 初始化一个 double 类型的 3x5 二维数组，使用一个处理变长数组的函数将其拷贝至另一个二维数组中。
// 还要编写一个以变长数组为形参的函数以显示两个数组的内容。这两个数组应该能处理任意 NxM 数组。
#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy_arr2d(int r, int c, double target[r][c], double source[r][c]);
void display_arr2d(int r, int c, double arr[r][c]);

int main(void)
{
    double source[ROWS][COLS] = {
                {32.4, 24.3, 64.3, 56.3, 32.1},
                {66.2, 32.1, 44.2, 66.3, 26.3},
                {77.3, 77.4, 88.3, 22.3, 22.3}
    };
    double target[ROWS][COLS];

    copy_arr2d(ROWS, COLS, target, source);
    display_arr2d(ROWS, COLS, source);
    printf("\n\n");
    display_arr2d(ROWS, COLS, target);

    return 0;
}

// 拷贝一个二维数组到另一个二维数组
void copy_arr2d(int r, int c, double target[r][c],  double source[r][c])
{
    int i, n;

    for (i = 0; i < r; i++)
    {
        for (n = 0; n < c; n++)
        {
            target[i][n] = source[i][n];
            // printf("%lf ", source[i][n]);
        }
    }
}

// 打印一个二维数组
void display_arr2d(int r, int c, double arr[r][c])
{
    int i, n;

    printf("{ ");
    for (i = 0; i < r; i++)
    {
        printf("{ ");
        for (n = 0; n < c; n++)
        {
            printf("%lf, ", arr[i][n]);
        }
        printf("}, ");
    }
        printf(" }");

}