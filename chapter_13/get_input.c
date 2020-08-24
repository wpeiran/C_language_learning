// 编写一个程序，不接受任何命令参数或接受一个命令行参数。如果有一个参数，将其解释为文件名；
// 如果没有参数，使用标准输入（stdin)作为输入。假设输入完全是浮点数。该程序要计算和报告输入数字的算术平均值。
// #include <stdio.h>
// #include <stdlib.h>
// #define SIZE 3

// int main(int argc, char const *argv[])
// {
//     const char * fname;
//     double fl[SIZE];
//     int status;
//     double sum = 0.0;

//     if (argc > 2)
//     {
//         fname = argv[1];
//         printf("The file name is %s", fname);
//     }
//     else
//     {
//         puts("Please enter 3 float :");
//         status = fscanf(stdin, "%lf %lf %lf", &fl[0], &fl[1], &fl[2]);
//         if (status)
//         {
//             for (int i = 0; i < SIZE; i++)
//             {
//                 sum += fl[i];
//             }
//         }
//         printf("The value of the average = %.2lf", sum / SIZE);
//     }
//     puts("\nDone.");

//     return 0;
// }

// 另一种方案：
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    FILE * fp;
    double n;
    double sum = 0.0;
    int ct = 0;

    if (argc == 1)
        fp = stdin;
    else if (argc == 2)
    {
        if ((fp = fopen(argv[1],"r")) == NULL)
        {
            fprintf(stderr, "Can't open %s\n", argv[1]);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        fprintf(stderr, "Usage: %s [filename]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    while (fscanf(fp, "%lf", &n) == 1)
    {
        sum += n;
            ++ct;
    }
    if (ct > 0)
        printf("Average of %d values = %f\n", ct, sum / ct);
    else
        printf("No valid data.\n");

    return 0;

}