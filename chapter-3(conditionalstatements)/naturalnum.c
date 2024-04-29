// apr29-2024 chapter 3
// homework question 2
// write a program to check if the given number is natural number or not
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if (num >= 1)
    {
        printf("it is a natural number\n");
    }
    else
    {
        printf("it is not a natural number\n");
    }
    return 0;
}
