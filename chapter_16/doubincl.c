// doubincl.c -- 包含头文件两次
#include <stdio.h>
#include "names_st.h"
#include "names_st.h"   // 不小心第2次包含头文件

int main(void)
{
    names winner = {"Less", "Ismoor"};
    printf("The winner is %s %s.\n", winner.first, winner.last);

    return 0;
}