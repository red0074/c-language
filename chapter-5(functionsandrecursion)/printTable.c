// jul24-2024 chapter 5
// write a function that print the table for given n
#include <stdio.h>
// defination
void printTable();
int main()
{
    int n;
    printf("Enter the number :\n");
    scanf("%d", &n);
    printTable(n); //->calling
    return 0;
}
void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
}