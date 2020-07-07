#include <stdio.h>

int main(void)
{
    int num, other_num;

    printf("Enter a number: ");
    scanf("%d", &num);
    other_num = num + 10;
    
    while (num < other_num)
    {
        printf("%d\t", num);
        num++;
    }
    printf("%d\t", num);
    
    return 0;
}