// jul24-2024 chapter 5
// write a function to create your own power function
#include <stdio.h>
float power(float n, int p);
int main()
{
    float n;
    int p;
    printf("Enter the numnber:\n");
    scanf("%f", &n);
    printf("Enter the power:\n");
    scanf("%d", &p);
    printf("%.1f", power(n, p));
    return 0;
}
float power(float n, int p)
{
    if (p == 1)
        return n;
    return n * power(n, p - 1);
}