// put_out.c -- 使用 puts() 在输出字符串的时候自动添加一个换行符
// puts() 函数在遇到空字符时就停止输出，所以必须确保有空字符。
#include <stdio.h>
#define DEF "I am a #defined string."
// 用双引号括起来的内容是字符串常量，且被视为该字符串的地址。

int main(void)
{
    char str1[80] = "An array was initialized to me.";
    const char * str2 = "A pointer was initialized to me.";
    // char dont[] = {'w', 'o', 'w', '!'}; // dont 不是字符串
    // 字符串是末尾为空字符的 char 字符数组

    puts("I'm an argument to puts().");
    puts(DEF);
    puts(str1);  // 储存字符串的数组名也被看作是地址
    puts(str2);
    puts(&str1[5]);
    puts(str2 + 4);

    // puts(dont);

    return 0;
}