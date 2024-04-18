// apr18-2024 chapter 1
// sum of two numbers
#include <stdio.h>
int main()
{
    // declaration of two variables of datatype integers
    int a, b;
    // reading the variable a
    printf("Enter the value a: ");
    scanf("%d", &a);
    // reading the variable b
    printf("Enter the variable b: ");
    scanf("%d", &b);

    // printing the sum of two numbers
    printf("sum of two numbers %d and %d is : %d\n", a, b, a + b);

    return 0;
}