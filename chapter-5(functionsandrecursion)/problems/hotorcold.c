// jul24-2024 chapter 5
// write a function to print "hot" and "cold" depends on the temperature user enters
#include <stdio.h>
void temp(int n);
int main()
{
    int n;
    printf("Enter the temperature:\n");
    scanf("%d", &n);
    temp(n);
    return 0;
}
void temp(int n)
{
    if (n > 45)
    {
        printf("HOT\n");
    }
    else
    {
        printf("COLD\n");
    }
}