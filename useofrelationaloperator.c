#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Greater than (a>b): %d\n", a>b);
    printf("Less than (a<b): %d\n", a<b);
    printf("Greater than or equal to (a>=b): %d\n", a>=b);
    printf("Less than or equal to (a<=b): %d\n", a<=b);
    printf("Equal to (a==b): %d\n", a==b);
    printf("Not equal to (a!=b): %d\n", a!=b);
    return 0;
}
