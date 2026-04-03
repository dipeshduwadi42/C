#include <stdio.h>
float simple();
int main()
{
    float SI;
    SI = simple();
    printf("Simple interest is %.2f\n", SI);
    return 0;
}
float simple()
{
    float p, t, r;
    printf("Enter principal, rate and time\n");
    scanf("%f%f%f", &p, &r, &t);
    return (p * t * r) / 100;
}
