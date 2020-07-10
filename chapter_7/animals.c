// animals.c -- 使用 swith 和 break 语句做多重选择
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet, and I will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end ma act.\n");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
        {
            continue;
        }
        if (islower(ch))        // 只接受小写字母
        {
            /* 注意事项：break 语句可用于循环和 switch 语句中，但是 continue 只能用于循环中。
                尽管如此，如果 switch 语句在一个循环中，continue 便可作为 switch 语句的一部分。
                这种情况下，就像在其他循环中一样，continue 让程序跳出循环的剩余部分，包括
                switch 语句的其他部分。 */
            switch (ch)         // 提供多重选择标签--多重分支
            {
            case 'a':       // 多重分支的标签项
                printf("argali, a wild sheep of Asia\n");
                break;      // 作用：它让程序离开 switch 语句，跳至 switch 语句后面的下一条语句
            case 'b':
                printf("babiruse, a wild pig of Malay\n");
                break;
            case 'c':
                printf("coati, racoonlike mammal\n");
                break;
            case 'd':
                printf("desman, aquatic, molelike critter\n");
                break;
            case 'e':
                printf("echidna, the spiny anteater\n");
                break;
            case 'f':
                printf("fisher, brownish marten\n");
                break;
            default:
                printf("That's a stumper!\n");
            }           // switch 结束
        }
        else
        {
            printf("I recognize only lowercase letters.\n");
        }
        while (getchar() != '\n')
        {
            continue;           // 跳过输入行的剩余部分
        }
        printf("Please type another letter or a #.\n");
    }           // while 循环结束
    printf("Bye!\n");

    return 0;
}