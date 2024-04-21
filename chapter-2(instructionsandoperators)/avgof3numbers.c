// apr21-2024 chapter 2
// homework question 1
// write a program to print average of 3 numbers?
#include <stdio.h>
int main()
{
    // declaring
    int a, b, c;
    // reading
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter the 3rd number: ");
    scanf("%d", &c);
    // printing the average
    printf("Average of %d,%d and %d is %d\n", a, b, c, (a + b + c) / 3);
    return 0;
}