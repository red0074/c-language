// jul24-2024 chapter 5
// write a function to convert celsius to fahrenheit
#include <stdio.h>
float convert(float celsius);
int main()
{
    float f = convert(37);
    printf("fahrenheit is : %f", f);
    return 0;
}
float convert(float celsius)
{
    float f = celsius * (9.0 / 5.0) + 32;
    return f;
}