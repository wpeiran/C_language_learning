#include <stdio.h>

int main(void)
{
    int time, weeks, days;
    const int D_TO_W = 7; // 一周有7天

    printf("This program converts a number of days into weeks and days.\n");
    printf("Enter a number of days ( <= 0 to quit ): ");
    scanf("%d", &time);
    while (time > 0)
    {
        weeks = time / D_TO_W;
        days = time % D_TO_W;
        printf("%d days are %d weeks, %d days.\n", time, weeks, days);
        printf("Enter next a number: ");
        scanf("%d", &time);
    }
    
    return 0;
}