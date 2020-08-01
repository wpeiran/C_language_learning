// sum_arr1.c -- 数组元素之和
#include <stdio.h>
#define SIZE 10
int sum(int ar[], int n); // 声明具有数组形参的函数原型

int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20}; // 初始化 int 数组
    long answer;

    answer = sum(marbles, SIZE);  // 调用函数
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %lu bytes.\n", sizeof(marbles));

    return 0;
}

int sum(int ar[], int n)    // 定义函数
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++)
    {
        total += ar[i];  // ar[i] == *(ar + i)
    }
    printf("The size of ar is %lu bytes.\n", sizeof(ar));

    return total;
}