// apr18-2024 chapter 1
// practice question2
// write a program to calculate area of the circle if radius is given
#include <stdio.h>
int main()
{
    float radius;
    float pi = 3.14;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    printf("Area if the circle for given radius %f is : %f\n", radius, pi * radius * radius);
    return 0;
}