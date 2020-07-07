// two_func.c —— 一个文件中包含两个函数
#include <stdio.h>
void butler(void);  /* ANSI/ISO C函数原型；也被称为“函数声明”——告知编译器要在程序中要使用该函数 */

int main(void)
{
    printf("I will summon the bulter function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void) // 函数定义开始
{
    printf("You rang, sir?\n");
}