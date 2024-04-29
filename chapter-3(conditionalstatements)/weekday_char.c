// apr29-2024 chapter 3
// using switch to print the day by using characters
#include <stdio.h>
int main()
{
    char day;
    printf("Enter the day(m,t,w,T,f,s,S): ");
    scanf("%c", &day);
    switch (day)
    {
    case 'm':
        printf("Monday\n");
        break;
    case 't':
        printf("Tuesday\n");
        break;
    case 'w':
        printf("Wednesday\n");
        break;
    case 'T':
        printf("Thursday\n");
        break;
    case 'f':
        printf("Friday\n");
        break;
    case 's':
        printf("Saturday\n");
        break;
    case 'S':
        printf("Sunday\n");
        break;
    default:
        printf("not a valid day !\n");
        // break;
    }
}