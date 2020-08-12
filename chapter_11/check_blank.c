// 设计一个函数，接受一个指向字符串的指针，返回指向该字符串第1个空格字符的指针，
// 或如果未找到空格字符，则返回空指针。
#include <stdio.h>
#define SIZE 80
char * check_space(char * string);

int main(void)
{
    char str[SIZE] = "This text use test function";
    char * find;

    find = check_space(str);
    if (find)
    {
        printf("The first space in a string of index is %d.", (find-str));
    }
    else
    {
        printf("The string is not space...");
    }

    return 0;
}

// char * check_space(char * string)
// {
//     char * ret_pot = NULL;

//     while (*string) // 如果输入的是没有空字符的字符串就会访问之后的数据
//     {
//         if (*string == ' ')
//         {
//             ret_pot = string;
//             break;
//         }
//         string++;
//     }

//     return ret_pot;
// }

// 一种解决方案
char * check_space(char * string)
{
    while (*string != ' ' && *string != '\0')
    {
        string++;   // 在第1个空白或空字符处停止
    }
    if (*string == '\0')
    {
        return NULL;  // NULL 指空指针
    }
    else
    {
        return string;
    }
}

// // 第二种方案：防止函数修改字符串，但是允许使用返回值改变字符串
// char * check_space(char * string)
// {
//     while (*string != ' ' && *string != '\0')
//     {
//         string++;   // 在第1个空白或空字符处停止
//     }
//     if (*string == '\0')
//     {
//         return NULL;  // NULL 指空指针
//     }
//     else
//     {
//         // 表达式 (char *)string 被称为“通过强制类型转换取消 const”
//         return (char *)string;
//     }
// }