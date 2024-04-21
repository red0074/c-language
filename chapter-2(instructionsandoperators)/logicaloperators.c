// apr21-2024 chapter 2
// practice question 8
// print 1(true) and 0(false) for following statements
// a)if it is sunday && it is snowing ->true
// b)if it is monday || it is raining ->true
// c)if number is greater than 9 && less than 100->true

#include <stdio.h>
int main()
{
    // declaring
    int isSunday, isSnowing;
    // reading the values from user
    printf("Enter 1 if it is sunday if not enter 0 : ");
    scanf("%d", &isSunday);
    printf("Enter 1 if it is snowing if not enter 0 : ");
    scanf("%d", &isSnowing);
    // checking
    printf("for sunday and snowing : %d\n", isSunday && isSnowing);

    // declaring
    int isMonday, isRaining;
    // reading
    printf("Enter 1 if it is monday if not enter 0 : ");
    scanf("%d", &isMonday);
    printf("Enter 1 if it is raining if not enter 0 : ");
    scanf("%d", &isRaining);
    // checking
    printf("for monday and raining : %d\n", isMonday || isRaining);

    // declaring
    int number;
    // reading
    printf("Enter the number : ");
    scanf("%d", &number);
    // checking
    printf("whether the number is greater than 9 and less than 100 : %d\n", number > 9 && number < 100);
    return 0;
}