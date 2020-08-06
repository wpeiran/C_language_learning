// arrchar.c -- 指针数组、字符串数组
#include <stdio.h>
#define SLEN 40
#define LIM 5

int main(void)
{
    // 指向字符串的指针数组（方括号比星号优先级更高，于是初始化时先声明为数组，然后声明元素为指针）
    const char * mytalents[LIM] = {
        "Adding numbers swiftly",
        "Multiplying accurately", "Stashing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };

    // char 类型数组的数组
    char yourtalents[LIM][SLEN] = {
        "Walking in straight line",
        "Sleeping", "Watching television",
        "Mailing letters", "Reading email"
    };
    int i;

    puts("Let's compare talents.");
    printf("%-36s %-25s\n", "My Talents", "Your Talents");
    for (i = 0; i < LIM; i++)
        printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
    printf("\nsizeof mytalents: %u, sizeof yourtalents: %u\n",
                sizeof(mytalents), sizeof(yourtalents));

    return 0;
}