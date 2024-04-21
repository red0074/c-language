// apr21-2024 chapter 2
// conversion of datatypes acording to their size
#include <stdio.h>
int main()
{
    // int operator int
    printf("%d\n", 2 * 2);
    // int operator float
    //  printf("%d",2*2.0);
    // the above ine gives the error at format specifier
    printf("%f\n", 2 * 2.0);
    // float operator float
    printf("%f\n", 2.0 * 2.0);
    return 0;
}