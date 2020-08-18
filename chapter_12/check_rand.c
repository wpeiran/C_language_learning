// 编写一个程序，生成1000个1~10范围内的随机数。不用保存或打印这些数字，仅打印没个数出现的次数。
// 用10个不同的种子值运行，生成的数字出现的次数是否相同？这是一个测试特定随机数生成器随机性的方法。
#include <stdio.h>
#include <stdlib.h>
static int one;
static int two;
static int three;
static int four;
static int five;
static int six;
static int seven;
static int eight;
static int nine;
static int ten;

int main(void)
{
    int i,num;

    for (i = 0; i < 1000; i++)
    {
        num = rand() % 10 + 1;

        switch (num)
        {
        case 1:  one++;
                 break;
        case 2:  two++;
                 break;
        case 3:  three++;
                 break;
        case 4:  four++;
                 break;
        case 5:  five++;
                 break;
        case 6:  six++;
                 break;
        case 7:  seven++;
                 break;
        case 8:  eight++;
                 break;
        case 9:  nine++;
                 break;
        case 10: ten++;
                 break;

        default:
            break;
        }
    }

    printf("one = %d\n", one);
    printf("two = %d\n", two);
    printf("three = %d\n", three);
    printf("four = %d\n", four);
    printf("five = %d\n", five);
    printf("six = %d\n", six);
    printf("seven = %d\n", seven);
    printf("eight = %d\n", eight);
    printf("nine = %d\n", nine);
    printf("ten = %d\n", ten);

    return 0;
}