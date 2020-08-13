// 实现 strstr() 函数的功能
// mystrstr()函数接受两个指向字符串的指针作为参数，如果第1个字符串中包含第2个字符串，
// 该函数返回在第1个字符串开始的地址，否则返回空指针。
#include <stdio.h>
#include <string.h>
#define SIZE 50
char * mystrstr(const char * s1, const char * s2);
char * s_gets(char * st, int n);

int main(void)
{
    char str[SIZE];
    char com_str[SIZE];
    char * com;

    puts("Find a string between two strings (2 in 1)");
    puts("Enter a line string (EOF to quit):");
    while (s_gets(str, SIZE))
    {
        puts("Enter another line string (EOF to quit):");
        if (s_gets(com_str, SIZE))
        {
            com = mystrstr(str, com_str);
            if (com)
            {
                printf("The second string is in the first string. start index is str[%d].\n",
                        com - str);
            }
            else
            {
                puts("The second string is not in the first string.");
            }
        }
        else
        {
            break;
        }
    puts("Enter a line string (EOF to quit):");
    }
    puts("Bye.");

    return 0;
}

// 一种实现 strstr() 函数的算法
// char * mystrstr(const char * s1, const char * s2)
// {
//     const char * p_s1 = s1;
//     const char * p_s2 = s2;

//     while (*p_s1)
//     {
//         const char * flag = p_s1; // 设置标志位，方便回滚

//         // 开始进行比较，如果第一个字符相等，继续循环比较下一个字符
//         while (*p_s1 == *p_s2 && *p_s1 != '\0')
//         {
//             p_s1++;
//             p_s2++;
//         }
//         // 上面循环完毕，有如下3种情况
//         if (!*p_s2) // p_s2 已经到达\0位置，说明在p_s1中已经找到子字符串
//         {
//             return (char *)flag; // 返回找到的子字符串的起始位置
//         }
//         if (!*p_s1) // p_s1到达\0，而p_s2没有到达\0，没有找到
//         {
//             return NULL;
//         }
//         // 没有匹配成功，继续从下一位开始匹配整个子字符串
//         p_s1++;
//     }
//     return NULL;
// }

// 第二种实现 strstr()函数的算法，更简洁
char * mystrstr(const char * s1, const char * s2)
{
    const char * p_s1 = s1;
    const char * p_s2 = s2;
    int i = 0; // p_s1 主字符串元素下标位置，从下标0开始找，可以通过变量进行设置下标起始位置
    int j = 0; // p_s2 子字符串元素下标位置

    while (i <= strlen(p_s1) - 1 && j <= strlen(p_s2) - 1)
    {
        if (p_s1[i] == p_s2[j]) // 字符相等，则继续匹配下一个字符
        {
            i++;
            j++;
        }
        else // 在匹配过程中发现有一个字符和子串中的不等，马上回退到下一个要匹配的位置
        {
            i = i -j + 1;
            j = 0;
        }
    }
    // 循环结束后，如果j的值等于strlen(p_s2)，子串中的字符已经在主串中都连续匹配到了
    if (j == strlen(p_s2))
    {
        return (char *)p_s1 + i - strlen(p_s2);
    }

    return NULL;
}

// 获取字符串并把\n替换为\0如果超出存储空间把缓冲区的数据清除
char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
        {
            i++;
        }
        if (st[i] == '\n')
        {
            st[i] = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }

    return ret_val;
}