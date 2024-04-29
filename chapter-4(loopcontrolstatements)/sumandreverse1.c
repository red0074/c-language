// apr29-2024 chapter 4
// practice question 15
// print the sum of first n natural numbers,also print them in reverse?
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        sum = sum + i;
        printf("%d\n", j);
    }
    printf("%d\n", sum);

    return 0;
}