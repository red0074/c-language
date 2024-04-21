// apr21-2024 chapter 2
// practice question 4
// arithematic instruction problems on opeartor precedence
// a)5*2-2*3
// b)5*2/2*3
// c)5*(2/2)*3
// d)5+2/2*3
#include <stdio.h>
int main()
{
    int a = 5 * 2 - 2 * 3;
    printf("%d\n", a);
    int b = 5 * 2 / 2 * 3;
    printf("%d\n", b);
    int c = 5 * (2 / 2) * 3;
    printf("%d\n", c);
    int d = 5 + 2 / 2 * 3;
    printf("%d\n", d);
    return 0;
}