// apr19-2024 chapter 1
// homeworkquestion 2
// take a number (n)from user and output its cube (n*n*n)
#include <stdio.h>
int main()
{
    // declaration of n with datatype integer
    int n;
    // reading the n
    printf("Enter the 'n' value: ");
    scanf("%d", &n);
    // printing the cube
    printf("cube of the number %d is : %d\n", n, n * n * n);
    return 0;
}