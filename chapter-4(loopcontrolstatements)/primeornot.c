// apr29-2024 chapter 4
// homework question 2
// write a program to check if a number is prime or not?
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int check = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            check = check + 1;
        }
    }
    if (check > 0)
    {
        printf("not a prime\n");
    }
    else
    {
        printf("prime\n");
    }
    return 0;
}