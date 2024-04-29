// apr29-2024 chapter 4
// practice question 17
// keep taking the numbers as input from user until user enters an odd number
#include <stdio.h>
int main()
{
    int n;
    do
    {
        scanf("%d", &n);
        printf("%d\n", n);
        if (n % 2 != 0)
        {
            printf("enter the odd number ");
            break;
        }
    } while (1);
    return 0;
}