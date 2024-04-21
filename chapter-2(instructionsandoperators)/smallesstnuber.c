// apr21-2024 chapter 2
// homework question 3
// write a program to print the smallest number
#include <stdio.h>
int main()
{
    // declaring
    int a, b;
    // reading
    printf("Enter the two numbers : ");
    scanf("%d", &a);
    scanf("%d", &b);
    // scanf("%d",&c);

    // checking
    printf("%d\n", a > b);
    return 0;
}
// 0->false
// 1->true