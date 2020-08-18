#include <stdlib.h>
#include <time.h>
static unsigned long int next = 1; // 生成随机数的种子
// 返回 1~10范围内的随机数
 int random(void)
{
    // 生成伪随机数的魔术公式
    next = next * 1254122 + 15151;
    return (int) (next / 6535) % 10 + 1;
}

// 倒序排列整数数组
void intsort(int * arr, int n)
{
    int temp, top, seek;

    for (top = 0; top < n; top++)
    {
        for (seek = top + 1; seek < n; seek++)
        {
            if (arr[seek] > arr[top])
            {
                temp = arr[top];
                arr[top] = arr[seek];
                arr[seek] = temp;
            }
        }
    }
}