// apr19-2024 chapter 1
// homeworkquestion 1
// write a program to calculate perimeter of rectangle . take sides a and b from user?
#include <stdio.h>
int main()
{
    // declaration of length and breadth
    int length, breadth;
    // reading length
    printf("Enter the length :");
    scanf("%d", &length);
    // reading the breadth
    printf("Enter the breadth :");
    scanf("%d", &breadth);
    // printing the perimeter
    printf("perimeter of the rectangle with length %d and breadth %d is : %d\n", length, breadth, 2 * length * breadth);
    return 0;
}