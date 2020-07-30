// 编写一个函数，从标准输入中读取字符，直到遇到文件结尾。程序要报告每个字符是否是字母。
// 如果是，还要报告字母在字母表中的数值位置。例如，c和C在字母表中的位置都是3。
// 合并一个函数，以一个字符作为参数，如果该字符是一个字母则返回一个数值位置，否则返回 -1。
#include <stdio.h>
#include <ctype.h>
void readchar(void);
int charplace(char ch);

int main(void)
{
    printf("Please enter some text:\n");
    readchar();
    printf("Bye.");

    return 0;
}

// 读取字符并报告类别（字母、其他），是字母还报告在字母表中的位置
void readchar(void)
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            printf("%c is char, in %d place of alphabet.\n",
                    ch, charplace(ch));
        }
        else
        {
            printf("%c is not char.\n", ch);
        }
    }
}

// 获取一个字母，返回对应的位置在字母表
int charplace(char ch)
{
    int num;

    if (iswlower(ch))
    {
        num = ch - ('a' -1);
    }
    else if (isupper(ch))
    {
        num = ch - ('A' -1);
    }
    else
    {
        num = -1;
    }

    return num;
}