// menuette.c --菜单程序
#include <stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(void)  // main 函数控制程序流，它调配各参数和函数
{
    int choice;

    while ((choice = get_choice()) != 'q')
    {
        switch (choice)
        {
        case 'a': printf("Buy low, sell high.\n");
                  break;
        case 'b': printf('\a');
                  break;
        case 'c': count();
                  break;
        default: printf("Program error!\n");
                 break;
        }
    }
    printf("Bye.\n");

    return 0;
}

// 获取输入选项
char get_choice(void)
{
    int ch;

    printf("Enter the letter of your choice:\n");
    printf("a. advice         b. bell\n");
    printf("c. count          q. quit\n");
    ch = get_first();
    while ((ch < 'a' || ch > 'c') && ch != 'q')
    {
        printf("Please respond with a, b, c, or q.\n");
        ch = get_first();
    }

    return ch;
}

// 获取输入的第一个字符，丢弃本行的其他字符
char get_first(void)
{
    int ch;

    // ch = getchar();
    while ((ch = getchar()) == '\n' || ch == ' ')
    {
        continue;       // 剔除空格和换行字符
    }
    while (getchar() != '\n')
    {
        continue;       // 获取第一个有效字符后，丢弃其余的字符
    }

    return ch;
}

void count(void)
{
    int n, i;

    printf("Count how far? Enter an integer:\n");
    n = get_int();
    for (i =1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    while (getchar() != '\n')
    {
        continue; // 获取第一个有效字符，丢弃本行其他字符
    }

}

// 获取一个整数
int get_int(void)
{
    int input;
    char ch;

    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
            putchar(ch);  // 处理错误输出
        }
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value, such as 25, -178, or 3: ");
    }

    return input;
}