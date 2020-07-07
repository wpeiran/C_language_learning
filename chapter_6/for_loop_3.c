// 在整数数组中读入八个整数，然后在倒序打印这八个整数
#include <stdio.h>
// #include <string.h>
#define SIZE 8

int main(void)
{
    int nums[20];
    int index;

    printf("Enter eight integer: \n");
    for (index = 0; index < SIZE; index++)
        scanf("%d", &nums[index]);

    printf("eight integer is (reverse): \n");
    for (index = SIZE - 1; index >= 0; index--)
        printf("%d ", nums[index]);

    return 0;
}