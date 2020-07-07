// 把厘米转换成英寸和尺
#include <stdio.h>
#define A_FEET 30.48 // 一英尺等于30.48厘米
#define A_INCH 2.54 // 一英寸等于2.54厘米

int main(void)
{
    int feets;
    float cm, inches;

    printf("Enter a height in centimeters: ");
    scanf("%f", &cm);
    // printf("cm = %f", cm);
    while (cm > 0)
    {
        feets = cm / A_FEET;
        inches = (cm - feets * A_FEET) / A_INCH;
        cm = (int) cm;
        printf("%2.1f cm = %d feet, %2.1f inches\n", cm, feets, inches);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &cm);
    }
    printf("bye");

    return 0;
}