#include <stdio.h>
int main()
{
    int p, t, r;
    float SI;
    printf("Enter the principal, time and rate: ");
    scanf("%d%d%d", &p, &t, &r);
    SI = (p * t * r) / 100;
    printf("The simple interest is %.2f", SI);
    return 0;
}
