// apr29-2024 chapter 4
// homework question 3
// write a program to print prime numbers in a range
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        int check = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                check = check + 1;
            }
        }
        if (check == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}