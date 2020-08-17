// diceroll.h
// 在 diceroll.c 文件中包含本文件其下面的声明也会包含在 diceroll.c 文件中。这样做没问题：
// 一个变量只能有一个定义式变量，但是带 extern 的声明是引用式声明，可以有多个引用式声明。
extern int roll_count;

int roll_n_dice(int dice, int sides);