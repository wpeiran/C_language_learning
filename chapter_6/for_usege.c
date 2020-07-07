// for usege example
#include <stdio.h>

int main(void)
{
    int secs;
    for (secs = 5; secs > 0; secs--)    // 使用递减运算符来递减计算器
        printf("%d seconds!\n", secs);
    printf("We have ignition!\n");
    printf("\n");

    int n;
    for (n = 2; n < 60; n = n + 13)     // 让计数器递增2/10等，递增不同的步长
        printf("%d \n", n);
    printf("\n");

    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)     // 用字符代替数字计数-字符使用整数形式保存的
        printf("The ASCII value for %c is %d.\n", ch, ch);
    printf("\n");

    double debt;
    for (debt = 100.0; debt < 150.0; debt = debt * 1.1) // 让递增的量几何增长（乘法运算）
        printf("Your debt is now $%.2f.\n", debt);
    printf("\n");

    int ans, n_2;
    ans = 2;
    for (n_2 = 3; ans <= 25;) // 可以省略一个或多个表达式（但是不能省略分号）
        ans = ans * n_2;
    printf("n = %d; ans = %d.\n", n_2, ans);
    printf("%n");

    return 0;
}