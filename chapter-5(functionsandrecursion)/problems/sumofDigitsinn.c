// jul24-2024 chapter 5
// write a function to find sum of digits of a number
#include <stdio.h>
void solve(int n);
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    solve(n);
    return 0;
}
void solve(int n)
{
    int sum = 0;
    int temp = n;
    while (temp != 0)
    {
        sum += temp % 10;
        temp = temp / 10;
    }
    printf("sum is %d", sum);
}