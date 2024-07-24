// jul24-2024 chapter 5
// write a function that returns the sum of two numbers
#include <stdio.h>
// declartion
int sum(int a, int b);
int main()
{
    int a, b;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    // calling
    int ans = sum(a, b);
    printf("sum of %d and %d is %d \n", a, b, ans);
}
// defination
int sum(int a, int b)
{
    return a + b;
}