// apr29-2024 chapter 4
// using continue printing from 1 to 10 except 3
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}