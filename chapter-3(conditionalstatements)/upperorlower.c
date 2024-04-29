// apr29-2024 chapter 3
// practice question 12
// write a program to find if a character entered by user is upper case or not?
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("upper case\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower case\n");
    }
    else
    {
        printf("not a character \n");
    }
    return 0;
}