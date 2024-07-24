// jul24-2024 chapter 5
// write a function that print hello
#include <stdio.h>
void printHello(); //->declaration of function prototype
int main()
{
    printHello(); //->function calling
    return 0;
}
//->function declaration
void printHello()
{
    printf("Hello\n");
}