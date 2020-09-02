// test union
#include <stdio.h>

union test
{
    int num;
    float fnum;
    char chnum;
};

int main(void)
{
    union test mix = {.fnum = 25.65};

    printf("mix = %d\n", mix.num);
    printf("mix = %f\n", mix.fnum);
    printf("mix = %d\n", mix.chnum);

    return 0;
}