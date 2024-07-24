// jul24-2024 chapter 5
// factorial of n using recursion
#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("factorial of the given number %d is %d", n, fact(n));
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}