#include <stdio.h>
void display(int *a);
int main()
{
    int A[5] = {10, 20, 30, 40, 50};
    int i;
    for(i = 0; i < 5; i++)
    {
        display(&A[i]);
    }
    return 0;
}
void display(int *a)
{
    printf("%d\t", *a);
}
