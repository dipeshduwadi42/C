#include <stdio.h>
int main()
{
    float c, fa;
    printf("Enter the temperature in centigrade: ");
    scanf("%f", &c);
    fa = (c * 9/5) + 32;
    printf("%.2f is temperature in fahrenheit", fa);
    return 0;
}
