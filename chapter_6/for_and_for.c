// 使用 for 嵌套循环打印格式化输出
#include <stdio.h>

int main(void)
{
    int frist, second;

    for (frist = 1; frist <= 4; frist++)
    {
        for (second = 1; second <= 8; second++)
        {
            printf("$");
        }
        printf("\n");
    }

    return  0;
}