#include <stdio.h>
float product(int a, float b);
int main()
{
    int a;
    float b, x;
    printf("Enter an integer number\n");
    scanf("%d", &a);
    printf("Enter a float number\n");
    scanf("%f", &b);
    x = product(a, b);
    printf("The product of two numbers is %.2f", x);
    return 0;
}
float product(int a, float b)
{
    return a * b;
}
