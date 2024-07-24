// jul24-2024 chapter 5
// print the Hello world 5 times by using recursion
#include <stdio.h>

void printHW(int c);
int main()
{
    printHW(5);
    return 0;
}
void printHW(int c)
{
    if (c == 0)
    {
        return;
    }
    printf("Hello world\n");
    printHW(c - 1);
}