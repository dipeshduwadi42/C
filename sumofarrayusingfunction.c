#include <stdio.h>
int sum(int x[], int n);
int main()
{
    int i, n, a[10];
    printf("Enter size of array\n");
    scanf("%d", &n);
    printf("Enter elements of array\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Result = %d", sum(a, n));
}
int sum(int x[], int n)
{
    int i, s = 0;
    for(i = 0; i < n; i++)
    {
        s = s + x[i];
    }
    return s;
}
