// 先存储到字符数组中一个单词，然后在倒序打印这个单词
#include <stdio.h>
#include <string.h>

int main(void)
{
    char words[20];
    int size;

    printf("Enter a word: ");
    scanf("%s", words);

    for (size = strlen(words); size >= 0; size--)
        printf("%c",words[size]);

    return 0;
}