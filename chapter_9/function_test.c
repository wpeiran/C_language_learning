// 第九章复习题练习
// 2. 编写函数头
void donut(int x);
int gear(int x, int y);
int guess(viod);
void stuff_it(double y, double * x);

char n_to_char(int num);
int digit(double fl, int dt);
double *  which(double * x, double * b);
int random(void);

int sum(int x, int y);
int sum(int x, int y)
{
    return x + y;
}

double sum(double x, double y);
double sum(double x, double y)
{
    return x + y;
}

void alter(int * x, int * y)
{
    int n_x, n_y;
    n_x = *x;
    n_y = *y;
    *x = n_x + n_y;
    *y = n_x - n_y;
}