// 编写一个类似 strncpy 的函数
#include <stdio.h>
#include <string.h>
#define SIZE 80
char * mystrncpy(char * s1, const char * s2, int n);

int main(void)
{
    char s1[SIZE] = "This is a test txt.";
    char s2[SIZE] = " append another line.";
    int cp_n = 20;

    puts(s1);
    puts(s2);
    mystrncpy(s1, s2, cp_n);
    puts(s1);

    return 0;
}

char * mystrncpy(char * s1, const char * s2, int n)
{
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    int i, j;

    if (s2_len >= n)
    {
        for (i = 0; i < n - 1; i++)
        {
            s1[s1_len + i] = s2[i];
        }
        s1[s1_len + i] = '\0';
    }
    else
    {
        for (j = 0; j < n; j++)
        {
            s1[s1_len + i] = s2[i];
        }
    }

    return s1;
}