#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    printf("The sum of numbers is %d", sum);
    return 0;
}
