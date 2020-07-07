//  创建一个包含26个字符元素的数组，然后把26个小字母存储到数组中，再把它们打印出来
#include <stdio.h>
#define SIZE 26

int main(void)
{
    char words[SIZE];
    int index;
    char ch = 'a';

    for (index = 0; index < SIZE; index++)
        words[index] = ch + index;
    
    for (index = 0; index < SIZE; index++)
        printf("%c ", words[index]);

    return 0;
}