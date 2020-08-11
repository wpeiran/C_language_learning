// array2d.c -- 处理二维数组的函数
#include <stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS], int rows);  // 三个函数的形参声明等效
void sum_cols(int [][COLS], int);         // 省略形参名，没问题
int sum2d(int (*ar)[COLS], int rows);    // 另一种语法

int main(void)
{
    int junk[ROWS][COLS] = {
            {2, 4, 6, 8},
            {3, 5, 7, 9},
            {12, 10, 8, 6}
    };

    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    printf("Sum of all elements = %d\n", sum2d(junk, ROWS));

    return 0;
}

// 求和二维数组的每行
void sum_rows(int ar[][COLS], int rows)
{
    int r;
    int c;
    int tot;

    for (r = 0; r < rows; r++)
    {
        tot = 0;
        for (c = 0; c < COLS; c++)
        {
            tot += ar[r][c];
        }
        printf("row %d: sum = %d\n", r, tot);
    }
}

// 求和二维数组的每列
void sum_cols(int ar[][COLS], int rows)
{
    int r;
    int c;
    int tot;

    for (c = 0; c < COLS; c++)
    {
        tot = 0;
        for (r = 0; r < rows; r++)
        {
            tot += ar[r][c];
        }
        printf("col %d: sum = %d\n", c, tot);
    }
}

// 求和二维数组
int sum2d(int (*ar)[COLS], int rows)
{
    int r;
    int c;
    int tot = 0;

    for (r = 0; r < rows; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            tot += ar[r][c];
        }
    }

    return tot;
}