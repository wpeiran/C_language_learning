// 把输入作为字符流读取，遇到EOF终止。报告每个单词的字母数，不要把空白统计为单词的字母。
#include <stdio.h>
// #include <ctype.h>

int main(void)
{
    char ch;
    int in_word = 0;
    int nums = 0;

    printf("Enter a paragraph of text and print the number of characters per word: \n");
    while ((ch = getchar()) != EOF)
    {
        if ((ch == ' ' || ch == '\n') && in_word == 1)
        {
            in_word = 0; // 识别单词的结尾，转换标志状态
        }
        else if (ch != ' ' && in_word == 0)
        {
            in_word = 1; // 识别单词的开头，转换标志状态
            nums++; // 单词字母数加一
        }
        else if (ch != ' ' && in_word == 1)
        {
            nums++; // 在单词中时，字母计数加一
        }

        if (in_word == 0)
        {
            printf("%d ", nums);
            nums = 0;
        }
    }
    printf("Bye!");

    return 0;
}