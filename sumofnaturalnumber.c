#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;//repeates the values
    }
    printf("The sum of natural numbers  is %d", sum);
    return 0;
}
