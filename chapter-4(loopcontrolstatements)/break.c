// apr29-2024 chapter 4
// print from 0 to 5 except 3 using break
#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if (i == 3)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}