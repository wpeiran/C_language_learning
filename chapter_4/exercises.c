// 复习题验证测试
#include <stdio.h>
// #include <string.h>
// #define Q "His Hamlet was funny without being vulgar."
// #define B "booboo"
// #define X 10
#define BOOK "War and Peace"

int main(void)
{
    // printf("He sold the painting  for $%2.2f.\n", 2.345e2);
    // printf("%C%C%C\n", 'H', 105, '\41');
    // printf("%s\n\"Q\" has %d characters.\n", Q, strlen(Q));
    // printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);

    // int age;
    // char name[30];
    // printf("Please enter your first name: ");
    // scanf(" %s", name);
    // printf("All right, %s, what's your age? \n", name);
    // scanf("%d", &age);
    // int xp = age + X;
    // printf("That's a %s! You must be at least %Ld.\n", B, xp);

    float cost = 12.99;
    float percent = 80.0;

    printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
    printf("That is %.0f%% of list.\n", percent);
    
    return 0;
}