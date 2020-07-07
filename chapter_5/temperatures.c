// 获取用户输入的华氏温度并转换为摄氏温度和开氏温度
#include <stdio.h>
void temperature(double value);

int main(void)
{
    double num;

    printf("This program used to convert the temperature.\n");
    printf("Enter a number of centigrade temperature: ");

    while (scanf("%Lf", &num) == 1)
    {
        temperature(num);
        printf("Enter next number of temperature: ");
    }
    
    return 0;
}

void temperature(double value)
{
    const double centigrade = value;
    double  kelvin, fahrenheit;

    kelvin = centigrade + 273.16;
    fahrenheit = centigrade * 9 / 5 + 32;

    printf("centigrade is %.2Lf\n", centigrade);
    printf("kelvin is %.2Lf\n", kelvin);
    printf("fahrenheit is %.2Lf\n", fahrenheit);
}