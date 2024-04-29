// apr29-2024 chapter 3
// using if else ,whether he/she is adult or not
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("Adult\n");
    }
    else
    {
        printf("Not Adult\n");
    }
    return 0;
}