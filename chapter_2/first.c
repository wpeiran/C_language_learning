# include <stdio.h>
int main(void)              /* 一个简单的 C 程序 */
{
    int num;                /* 定义一个名为 num 的变量 */
    num = 1;                /* 为 num 赋一个值 */

    printf("I am a simple "); /* 使用 printf() 函数 */
    printf("computer.\n");
    printf("My favorite number is %d bacause it is first.\n",num);

    // 适用于单行的注释，C99标准新增的一种风格的注释，解决旧形式的注释误删注释 */ 符号的问题。

    /*
    适用于单行、多行的原有注释形式。
    适用于单行、多行的原有注释形式。

    使用注意事项：要警惕出现误删注释符号导致把代码也注释到的情况！
    */

    return 0;
}