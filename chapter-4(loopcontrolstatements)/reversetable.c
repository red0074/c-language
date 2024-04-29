// apr29-2024 chapter 4
// practice question 22
// print reverse of table for a number ?
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", n * i);
    }
    return 0;
}