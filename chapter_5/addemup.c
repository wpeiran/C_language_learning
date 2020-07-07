#include <stdio.h>

int main(void)
{
    int count, sum;

    // count = 0;
    sum = 0;
    printf("Enter a number of days (<20): ");
    scanf("%d", &count);
    while (count++ < 20)
    {
        // sum = sum + count;
        sum = sum + count * count;
        printf("sum = %d, count = %d\n", sum, count);
    }
    printf("sum = %d\n", sum);

    return 0;
}