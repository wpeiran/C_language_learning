// 多次掷骰子的模拟程序,与 diceroll.c 一起编译
#include <stdio.h>
#include <stdlib.h> // 为库函数 srand() 提供原型
#include <time.h>   // 为 time() 提供原型
#include "diceroll.h" // 为 roll_n_dice() 提供原型

int main(void)
{
    int dice, sides;
    int sets;

    srand((unsigned int) time(0)); // 随机种子
    printf("Enter the number of sets; enter q to stop : ");
    while (scanf("%d", &sets))
    {
        printf("How many sides and how many dice? ");
        scanf("%d %d", &sides, &dice);
        printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);
        for (int i = 0; i < sets; i++)
        {
            printf(" %d", roll_n_dice(dice, sides));
        }
        printf("\nHow many sets? Enter q to stop: ");
    }
    printf("Done.\n");

    return 0;
}