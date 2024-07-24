// jul24-2024 chapter 5
// write a function to calculate percentage of a student from marks in science,maths and sanskrit
#include <stdio.h>
int percen(int math, int science, int sanskrit);
int main()
{
    int m, s, sa;
    printf("Enter the maths marks:\n");
    scanf("%d", &m);
    printf("Enter the science marks:\n");
    scanf("%d", &s);
    printf("Enter the sanskrit marks:\n");
    scanf("%d", &sa);
    int ans = percen(m, s, sa);
    printf("percentage of the student is : %d", ans);
    return 0;
}
int percen(int m, int s, int sa)
{
    return ((m + s + sa) / 3);
}