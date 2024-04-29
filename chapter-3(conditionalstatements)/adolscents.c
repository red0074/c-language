// apr29-2024 chapter 3
// using else-if for the adolscents of a person by using their age
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Adult \n");
    }
    else if (age > 13 && age < 18)
    {
        printf("Teenager \n");
    }
    else
    {
        printf("Child \n ");
    }
    return 0;
}