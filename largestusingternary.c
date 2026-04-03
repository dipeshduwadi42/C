#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter two numbers\n");
    scanf("%d%d", &n1, &n2);
    n3 = (n1 > n2) ? n1 : n2;
    printf("The largest number is %d", n3);
    return 0;
}
