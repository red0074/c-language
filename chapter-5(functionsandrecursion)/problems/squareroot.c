// jul24-2024 chapter 5
// write a function to find square root of a number
#include <stdio.h>
#include <math.h>
float squareroot(int n);
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("%.1f", squareroot(n));
    return 0;
}
float squareroot(int n)
{
    return pow(n, 0.5);
}