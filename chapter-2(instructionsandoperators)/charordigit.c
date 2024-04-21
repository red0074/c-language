// apr21-2024 chapter 2
// homework question 2
// write a program to check if given chracter is digit or not?
#include <stdio.h>
int main()
{
    // declaring
    char character;
    // reading
    printf("Enter the character : ");
    scanf("%c", &character);
    // checking
    printf("%d\n", character >= '0' && character <= '9');
    return 0;
}
// 1->number
// 0->digit