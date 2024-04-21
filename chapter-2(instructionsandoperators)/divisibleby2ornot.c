// apr21-2024 chapter 2
// practice question 5
// write a program to check if a number is divisible by 2 or not?
#include <stdio.h>
int main()
{
    // declaration
    int x;
    // reading the input
    printf("Enter the number : ");
    scanf("%d", &x);
    // checking the number
    printf("%d\n", x % 2 == 0);
}

// 1->true
// 0->false