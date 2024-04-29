// apr29-2024 chapter 4
// practice question 20
// print all the odd numbers from 5 to 50?
#include <stdio.h>
int main()
{
    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}