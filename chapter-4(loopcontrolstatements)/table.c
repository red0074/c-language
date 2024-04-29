// apr29-2024 chapter 4
// practice question 16
// print the table of a number input by user?
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }
    return 0;
}