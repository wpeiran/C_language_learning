// wordcnt.c -- 统计字符数、单词书、行数
#include <stdio.h>
#include <ctype.h>          // 为 isspace() 函数提供原型
#include <stdbool.h>        // 为 bool、ture、false 提供定义
// #define STOP '|'

int main(void)
{
    int ch;                 // 读入字符 -- 使用 EOF
    char prev;              // 读入的前一个字符，用于识别完整的行
    long n_chars = 0L;      // 字符数
    int n_lines = 0;        // 行数
    int n_words = 0;        // 单词数
    int p_lines = 0;        // 不完整的行数
    bool inword = false;    // 如果 c 在单词中， inword 等于 true

    printf("Enter text to be analyzed:\n");
    while ((ch = getchar()) != EOF)
    {
        n_chars++;          // 统计字符
        if (ch == '\n')
        {
            n_lines++;      // 统计行
        }
        if (!isspace(ch) && !inword)
        {
            inword = true;  // 开始一个新的单词
            n_words++;      // 统计单词
        }
        if (isspace(ch) && inword)
        {
            inword = false;     // 扫描到了单词的末尾
        }
        prev = ch;               // 保持字符的值
    }

    if (prev != '\n')
    {
        p_lines = 1;
    }
    printf("characters = %ld, words = %d, lines = %d, ",
            n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines);

    return 0;
}