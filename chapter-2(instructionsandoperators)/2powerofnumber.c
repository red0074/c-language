// apr19-2024 chapter 2
// to get the square of a number
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 2;
    int number;
    printf("Enter any number :");
    scanf("%d", &number);
    float power = pow(number, n);
    printf("square of number %d is %f\n", number, power);
    return 0;
}
