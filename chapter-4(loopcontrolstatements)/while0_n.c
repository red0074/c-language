// apr29-2024 chapter 4
// practice question 14
// print the number from 0 to n,if n is given by user?
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    int i = 0;
    while (i <= n)
    {
        /* code */
        printf("%d\n", i);
        i++;
    }
    return 0;
}