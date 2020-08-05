// 完成一些列对数组的处理，每个任务都用单独的函数来完成
#include <stdio.h>
#define ROWS 3
#define COLS 5
// void get_data(double ar[][COLS], int rows);
void get_data(int rows, int cols, double ar[rows][cols]);  // 使用变长数组参数
// double average(double ar[], int cols);
double average(int cols, double ar[cols]);
// double all_average(double ar[][COLS], int rows);
double all_average(int rows, int cols, double ar[rows][cols]);
// double maximum(double ar[][COLS], int rows);
double maximum(int rows, int cols, double ar[rows][cols]);
// void print_massage(double ar[][COLS], int rows);
void print_massage(int rows, int cols, double ar[rows][cols]);


int main(void)
{
    double arr[ROWS][COLS];
    int i;

    get_data(ROWS, COLS, arr);
    for (i = 0; i < ROWS; i++)
    {
        printf("The average of %d row is %.2lf\n", i, average(COLS, arr[i]));
    }
    print_massage(ROWS, COLS, arr);

    return 0;
}

// 把用户输入的数据存储在 3x5 的数组中
// void get_data(double ar[][COLS], int rows)
void get_data(int rows, int cols, double ar[rows][cols])
{
    int i, n;

    printf("Enter 3x15 double values: \n");
    for (i = 0; i < rows; i++)
    {
        for (n = 0; n < cols; n++)
        {
            scanf("%lf", &ar[i][n]);
        }
    }
}

// 计算每组（5个）数据的平均值
// double average(double ar[], int cols)
double average(int cols, double ar[cols])
{
    int i;
    double total = 0.0;

    for (i = 0; i < cols; i++)
    {
        total += ar[i];
    }

    return total / cols;
}

// 计算所以数据的平均值
// double all_average(double ar[][COLS], int rows)
double all_average(int rows, int cols, double ar[rows][cols])
{
    int i, n;
    double total;

    for (i = 0; i < rows; i++)
    {
        for (n = 0; n < cols; n++)
        {
            total += ar[i][n];
        }
    }

    return total / (rows * cols);
}

// 找出这 15 个数据中的最大值
// double maximum(double ar[][COLS], int rows)
double maximum(int rows, int cols, double ar[rows][cols])
{
    int i, n;
    double max = 0.0;

    for (i = 0; i < rows; i++)
    {
        for (n = 0; n < cols; n++)
        {
            if(ar[i][n] > max)
            {
                max = ar[i][n];
            }
        }
    }

    return max;
}

// 打印结果
// void print_massage(double ar[][COLS], int rows)
void print_massage(int rows, int cols, double ar[rows][cols])
{
    printf("The average of all the elements is %.2lf\n",
            all_average(rows, cols, ar));
    printf("The maximum value of all elements is %.2lf\n",
            maximum(rows, cols, ar));
}