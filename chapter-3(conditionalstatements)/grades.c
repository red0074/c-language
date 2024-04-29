// apr29-2024 chapter 3
// practice question 10
// write a program to give grades to a student
// marks < 30 is c
// 30<=marks<70 is B
// 70<=marks<90 is A
// 90<=marks<=100 is A+
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks(0-100): ");
    scanf("%d", &marks);
    if (marks < 30)
    {
        printf("C\n");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("B\n");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("A\n");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("A+\n");
    }
    else
    {
        printf("enter only marks\n");
    }
    return 0;
}