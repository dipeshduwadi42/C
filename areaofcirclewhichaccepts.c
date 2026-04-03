#include <stdio.h>
#define PI 3.14
float AreaOfCircle(float r);
int main()
{
    float r1, r2, A1, A2;
    printf("Enter radius of first circle\n");
    scanf("%f", &r1);
    printf("Enter radius of second circle\n");
    scanf("%f", &r2);
    A1 = AreaOfCircle(r1);
    printf("The area of first circle is %.2f\n", A1);
    A2 = AreaOfCircle(r2);
    printf("The area of second circle is %.2f\n", A2);
    return 0;
}
float AreaOfCircle(float r)
{
    return PI * r * r;
}
