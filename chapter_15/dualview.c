// dualview.c -- 位字段和按位运算符
// 此实例仅用于演示，实际使用中不推荐
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
// 位字段符号常量
// 边框线样式
#define SOLID    0
#define DOTTED   1
#define DASHED   2
// 三原色
#define BLUE    4
#define GREEN   2
#define RED     1
// 混合颜色
#define BLACK   0
#define YELLOW  (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN    (GREEN | BLUE)
#define WHITE   (RED | GREEN | BLUE)

// 按位方法中用到的符号常量
#define OPAQUE       0x1
#define FILL_BLUE    0x8
#define FILL_GREEN   0X4
#define FILL_RED     0x2
#define FILL_MASK    0xE
#define BORDER       0x100
#define BORDER_BLUE  0x800
#define BORDER_GREEN 0x400
#define BORDER_RED   0x200
#define BORDER_MASK  0xE00
#define B_SOLID      0
#define B_DOTTED     0x1000
#define B_DASHED     0x2000
#define STYLE_MASK   0x3000

const char * colors[8] = {"black", "red", "green", "yellow",
                         "blue", "magenta", "cyan", "white"};

struct box_props
{
    unsigned int opaque         : 1;
    unsigned int fill_color     : 3;
    unsigned int                : 4;
    unsigned int show_border    : 1;
    unsigned int border_color   : 3;
    unsigned int border_style   : 2;
    unsigned int                : 2;
};

// 仅用于示例说明 位字段 和 按位运算符 的差别，不推荐使用这种方式
union Views     // 把数据看作结构或 unsigned short 类型的变量
{   // 如果想用联合中的任意格式去显示，就需要其中的成员有相同的类型。如位字段（16位）和 unsigned short
    struct box_props st_view;
    unsigned short us_view;
};

void show_settings(const struct box_props * pb);
void show_settings1(unsigned short);
char * itobs(int n, char * ps);

int main(void)
{
    // 创建 Views 联合，并初始化 initialize struct box view
    union Views box = {{true, YELLOW, true, GREEN, DASHED}};
    char bin_str[8 * sizeof(unsigned int) + 1];

    // printf("unsigned short = %d byte\n\n", sizeof(unsigned short));
    printf("Original box settings:\n");
    show_settings(&box.st_view);
    // printf("bits are %s\n", itobs(box.us_view, bin_str));
    // printf("box.us_view = %d\n", box.us_view);
    printf("\nBox settings using unsigned int view:\n");
    show_settings1(box.us_view);

    printf("bits are %s\n", itobs(box.us_view, bin_str));
    box.us_view &= ~FILL_MASK;              // 把表示填充色的位清 0
    box.us_view |= (FILL_BLUE | FILL_GREEN);// 重置填充色
    box.us_view ^= OPAQUE;                  // 切换是否透明的位
    box.us_view |= BORDER_RED;              // 错误的方法
    box.us_view &= ~STYLE_MASK;             // 把样式的位清 0
    box.us_view |= B_DOTTED;                // 把样式设置为点状
    printf("\nModified box settings:\n");
    show_settings(&box.st_view);
    printf("\nBox settings using unsigned int view:\n");
    show_settings1(box.us_view);
    printf("bits are %s\n", itobs(box.us_view, bin_str));

    return 0;
}

// 处理位字段结构的数据并显示
void show_settings(const struct box_props * pb)
{
    printf("Box is %s.\n", pb->opaque == true ? "opaque" : "transparent");
    printf("The fill color is %s.\n", colors[pb->fill_color]);
    printf("Border %s.\n", pb->show_border == true ? "shown" : "not shown");
    printf("The border color is %s.\n", colors[pb->border_color]);
    printf("The border style is ");
    switch (pb->border_style)
    {
        case SOLID:  printf("solid.\n"); break;
        case DOTTED: printf("dotted.\n"); break;
        case DASHED: printf("dashed.\n"); break;
        default:     printf("unknown type.\n");
    }
}

// 处理 unsigned short 数据并显示
void show_settings1(unsigned short us)
{
    printf("box is %s.\n", (us & OPAQUE) == OPAQUE ? "opaque" : "transparent");
    printf("The fill color is %s.\n", colors[(us >> 1) & 07]);
    printf("Border %s.\n", (us & BORDER) == BORDER ? "shown" : "not shown");
    printf("The border style is ");
    switch (us & STYLE_MASK)
    {
        case B_SOLID     : printf("solid.\n"); break;
        case B_DOTTED    : printf("dotted.\n"); break;
        case B_DASHED    : printf("dashed.\n"); break;
        default          : printf("unknown type.\n");
    }
    printf("The border color is %s.\n", colors[(us >> 9) & 07]);
}

char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);

    for (i = size -1; i >= 0; i--, n >>= 1)
        ps[i] = (01 & n) + '0';
    ps[size] = '\0';

    return ps;
}