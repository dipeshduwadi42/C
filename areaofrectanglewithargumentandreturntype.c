#include <stdio.h>
int area(int l, int b);
int main()
{
    int l, b, A;
    printf("Enter length and breadth of rectangle\n");
    scanf("%d%d", &l, &b);
    A = area(l, b);
    printf("The area of rectangle is %d", A);
    return 0;
}
int area(int l, int b)
{
    return l * b;
}
