// jul24-2024 chapter 5
// write a function to play n terms of the fibonacci sequence
#include <stdio.h>
int fibo(int n);
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }
    return 0;
}
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}