// strings1.c -- 在程序中演示几种表示字符串的方式
#include <stdio.h>
# define MSG "I am a symbolic string constant."  // 声明一个字符串常量
#define MAXLENGTH 81

int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array."; // 声明并初始化一个字符串
    const char * pt1 = "Something is pointing at me."; // 声明一个不变指针让它指向一个字符串

    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);

    return 0;
}