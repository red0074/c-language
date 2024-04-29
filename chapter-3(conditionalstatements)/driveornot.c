// apr29-2024 chapter 3
// using ternary operator whether he can drive or not using their age
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);
    age >= 18 ? printf("drive\n") : printf("not drive \n");
    return 0;
}