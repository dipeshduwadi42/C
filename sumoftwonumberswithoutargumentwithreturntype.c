#include <stdio.h>
void sum();
int main()
{
    sum();
}
void sum()
{
    int a, b, r;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    r = a + b;
    printf("Sum is %d", r);
}
