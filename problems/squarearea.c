// apr18-2024 chapter 1
// practice question1
// write a program to calculate area of the square if side is given
#include <stdio.h>
int main()
{
    int side;
    printf("Enter the side : ");
    scanf("%d", &side);
    printf("Area of the square for side %d is : %d\n", side, side * side);
    return 0;
}