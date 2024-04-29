// apr29-2024 chapter 3
// using switch to print the day by using numbers
#include <stdio.h>
int main()
{
    int day;
    printf("Enter the day: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("not a valid day !\n");
        // break;
    }
}