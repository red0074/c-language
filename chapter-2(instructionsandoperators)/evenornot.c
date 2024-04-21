// apr21-2024 chapter 2
// practice question 6
// write a program to check whether given number is even or odd?
#include <stdio.h>
int main()
{
    // declaring
    int a;
    // reading the input
    printf("Enter the number :");
    scanf("%d", &a);
    // checking the number
    printf("%d\n", a % 2 == 0);
    return 0;
}

// 1->true
// 0->false