// jul24-2024 chapter 5
// write a function to calculate area of the square,a circle and a rectangle
#include <stdio.h>
float squareArea(float a);
float rectangleArea(float a, float b);
float circleArea(float rad);
int main()
{
    float a, b, rad;
    int ch;
    printf("Enter the shape you want to select : \n1.squareArea\n2.rectangleArea\n3.circleArea\n");
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("Enter the side of the square:");
        scanf("%f", &a);
        printf("Area of the square with side %.1f is %.1f", a, squareArea(a));
    }
    else if (ch == 2)
    {
        printf("Enter the height of the rectangle:");
        scanf("%f", &a);
        printf("Enter breath of the rectangle: ");
        scanf("%f", &b);
        printf("Area of the rectangle whose length is %.1f and breadth is %.1f is %.1f", a, b, rectangleArea(a, b));
    }
    else
    {
        printf("Enter the radius of the circle: ");
        scanf("%f", &rad);
        printf("Area of the circle whose radius is %.1f is %.1f", rad, circleArea(rad));
    }
    return 0;
}
float squareArea(float a)
{
    return a * a;
}
float rectangleArea(float a, float b)
{
    return a * b;
}
float circleArea(float r)
{
    return 3.14 * r * r;
}