// 演示浮点值的上溢和下溢
#include <stdio.h>

int main(void)
{
    float toobig = 3.4E38 * 100.0f; // 上溢
    printf("%e\n", toobig);

    return 0;
}