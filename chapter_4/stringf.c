// stringf.c -- 字符串格式
#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.10s]\n", BLURB);
    printf("[%-24.10s]\n", BLURB);

    return 0;
}