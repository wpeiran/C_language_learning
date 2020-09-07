// assert.c -- 使用 assert()
// 使用 assert() 有几个好处：它不仅能自动识别文件和出问题的行号，还有一种无需更改代码就能开启
// 或关闭 assert() 的机制。如果认为已经排除了程序的 bug，就可以把下面的宏定义写在包含 assert.h
// 的位置前面：#define NDEBUG 并重新编译程序，这样编译器就会禁用文件中的所以 assert() 语句。
// 如果程序又出现问题，可以移除这条#define指令（或者把它注释掉），然后重新编译程序，这样就
// 重新启用了 assert() 语句


#include <stdio.h>
#include <math.h>
// #define NDEBUG
#include <assert.h>

int main(void)
{
    double x, y, z;

    puts("Enter a pair of numbers (0 0 to quit): ");
    while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
    {
        z = x * x - y * y; // 应该用 + 号
        assert(z >= 0);
        printf("answer is %f\n", sqrt(z));
        puts("Next pair of numbers: ");
    }
    puts("Done.");

    return 0;
}