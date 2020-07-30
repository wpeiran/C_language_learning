// 第九章复习题练习
// 2. 编写函数头
#include <stdio.h>

void donut(int x);
int gear(int x, int y);
int guess(viod);
void stuff_it(double y, double * x);

char n_to_char(int num);
int digit(double fl, int dt);
double *  which(double * x, double * b);
int random(void);

int sum(int x, int y);
int sum(int x, int y)
{
    return x + y;
}

double sum(double x, double y);
double sum(double x, double y)
{
    return x + y;
}

void alter(int * x, int * y)
{
    int n_x, n_y;
    n_x = *x;
    n_y = *y;
    *x = n_x + n_y;
    *y = n_x - n_y;
}

int maximum(int a, int b, int c)  // 返回三个整数中最大的那个
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;       // 同样也是合法的
    }

}

int largest(int a, int b, int c)  // (另一种方案)返回三个整数中最大的那个
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;     // C中习惯使用一个return语句，使用一个变量去记录值
}

void show_msg(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files           2) move files\n");
    printf("3) remove files         4) quit\n");
    printf("Enter the number of your choice:\n");
}

int check(int a, int b)
{
    int marknum = 4;
    int num;

    while (scanf("%d", &num) == 1)
    {
        if (num > a && num < num)
        {
            show_msg();
        }
        else
        {
            marknum = num;
            break;
        }
    }
    return marknum;
}

int main(void)
{
    const max = 4, min = 1;
    int choice;

    show_msg();
    choice = check(max, min);

    printf("return value is %d", choice);

    return 0;
}