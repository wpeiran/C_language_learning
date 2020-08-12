// join_chk.c -- 拼接两个字符串，检查第1数组的大小
#include <stdio.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 13
char * s_gets(char * st, int n);

int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;

    puts("What is yours favorite flower?");
    s_gets(flower, SIZE);
    if ((strlen(addon) + strlen(flower) + 1) <= SIZE)
        strcat(flower, addon);
    puts(flower);
    puts("What is your favorite bug?");
    s_gets(bug, BUGSIZE);
    available = BUGSIZE - strlen(bug) - 1;
    strncat(bug, addon, available);
    puts(bug);

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * ret_pot;
    // int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        ret_pot = strchr(ret_val, '\n'); // 查找换行符
        if (ret_pot)                    // 如果地址不是 NULL
        {
            *ret_pot = '\0';            // 在此处放置一个空字符
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }

        // while (st[i] != '\n' && st[i] != '\0')
        // {
        //     i++;
        // }
        // if (st[i] == '\n')
        // {
        //     st[i] = '\0';
        // }
        // else
        // {
        //     while (getchar() != '\n')
        //     {
        //         continue;
        //     }
        // }
    }

    return ret_val;
}