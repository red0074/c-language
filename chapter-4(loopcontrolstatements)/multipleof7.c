// apr29-2024 chapter 4
// practice question 18
// keep taking the numbers as input from user until user enters a number which is multiple of 7
#include <stdio.h>
int main()
{
    int n;
    do
    {
        scanf("%d", &n);
        printf("%d\n", n);
        if (n % 7 == 0 && n != 0)
        {
            printf("Entered the multiple of 7\n");
            break;
        }
    } while (1);
    return 0;
}