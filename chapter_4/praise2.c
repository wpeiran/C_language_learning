// 如果编译器不识别 %zd, 尝试换成 %u 或 %lu
#include <stdio.h>
#include <string.h> // 提供 strlen()函数的原型
#define PREISE "You are an extraordinary being."

int main(void)
{
    char name[40]; // 声明一个char数组用于存储字符串

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PREISE);
    printf("Your name of %u letters occupies %u memory cells.\n",
            strlen(name), sizeof name);
    printf("The phrase of praise has %u letters ", strlen(PREISE));
    printf("and occupies %u memory cells.\n", sizeof PREISE);

    return 0;
}