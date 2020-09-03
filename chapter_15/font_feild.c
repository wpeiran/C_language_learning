// 设计一个位字段结构用于储存信息。
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 对齐的类型声明
#define LEFT   0
#define CENTER 1
#define RIGHT  2

// 加粗与斜体、下划线开关
#define OFF 0
#define ON  1

// 声明对应对齐类型和加粗、斜体、下划线开关的字符串
const char * font_align[] = {"left", "center", "right"};
const char * font_type[] = {"OFF", "ON"};

struct font {
    unsigned int ID         : 8;
    unsigned int SIZE       : 7;
    unsigned int U          : 1;
    unsigned int ALIGNMENT  : 2;
    unsigned int B          : 1;
    unsigned int I          : 1;
    unsigned int            : 4;
};

int main(void)
{
    struct font myst = {1, 12, OFF, LEFT, OFF, OFF};
    char ch;
    int temp;

    printf("     ID SIZE ALIGNMENT    B    I    U\n");
    printf("     %d   %d    %s      %s  %s  %s\n\n", myst.ID, myst.SIZE,
    font_align[myst.ALIGNMENT], font_type[myst.B], font_type[myst.I], font_type[myst.U]);
    printf("f)change font    s)change size    a)change alignment\n"
           "b)toggle bold    i)toggle italic  u)toggle underline\n"
           "q)quit\n");

    while (strchr("fsabiuq", (ch = getchar())) && ch != 'q')
    {
        switch (ch)
        {
            case 'f': printf("Enter font size (0-127):\n");
                      if (scanf("%d", &temp) && temp >= 0 && temp <= 127)
                      {
                          myst.ID = temp;
                          break;
                      }
                      else
                      {
                        printf("Enter error.\n");
                        exit(1);
                      }
        }

        // 清理缓冲区
        while (getchar() != '\n')
            continue;

        printf("     ID SIZE ALIGNMENT    B    I    U\n");
        printf("     %d   %d    %s      %s  %s  %s\n\n", myst.ID, myst.SIZE,
        font_align[myst.ALIGNMENT], font_type[myst.B], font_type[myst.I], font_type[myst.U]);
        printf("f)change font    s)change size    a)change alignment\n"
            "b)toggle bold    i)toggle italic  u)toggle underline\n"
            "q)quit\n");
    }
    puts("Bye.");

    return 0;
}