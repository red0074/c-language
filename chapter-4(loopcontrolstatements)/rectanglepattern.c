// apr29-2024 chapter 4
// homework question 1
// search on what a nested loop is and print this
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
#include <stdio.h>
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("* ");
        }
        printf(" \n");
    }
    return 0;
}