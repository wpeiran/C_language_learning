// pe12-2b.c 与 pe12-2a.c 一起编译
#include <stdio.h>
#include "pe12-2a.h"

int main(void)
{
    int mode, mode_t;
    double dis, fuel;


    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while (mode >= 0)
    {
        mode_t = set_mode(mode);
        get_info(mode_t, &dis, &fuel);
        show_info(mode_t, &dis, &fuel);
        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done.\n");

    return 0;
}