// apr29-2024 chapter 3
// practice question 9
// write a program to check if a studednt passed or fail
// marks > 30 is PASS
// maeks <=30 is fail
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks:");
    scanf("%d", &marks);
    if (marks >= 0 && marks <= 30)
    {
        printf("FAIL\n");
    }
    else if (marks > 30 && marks <= 100)
    {
        printf("PASS\n");
    }
    else
    {
        printf("enter only marks!\n");
    }
    return 0;
}