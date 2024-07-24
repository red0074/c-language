// jul24-2024 chapter 5
// use library function to calculate the square of number given by user
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the side of the Square: ");
    scanf("%d", &n);
    printf("Area of the square is %d", (int)pow(n, 2));
    return 0;
}