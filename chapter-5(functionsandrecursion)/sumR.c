// jul24-2024 chapter 5
// sum of first n natural numbers
#include <stdio.h>
int sumR(int n);
int main()
{
    printf("%d\n", sumR(4));
    return 0;
}
int sumR(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }
    return n + sumR(n - 1);
}