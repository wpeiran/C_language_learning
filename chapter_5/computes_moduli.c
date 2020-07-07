#include <stdio.h>

int main(void)
{
    int first, second, remainder;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &second);
    printf("Now enter the frist operand: ");
    scanf("%d", &first);

    while (first > 0)
    {
        remainder = first % second;
        printf("%d %% %d is %d\n", first, second, remainder);
        printf("Enter next number for first operand (<= 0 to quit: ");
        scanf("%d", &first);
    }
    printf("Done");

    return 0;
}