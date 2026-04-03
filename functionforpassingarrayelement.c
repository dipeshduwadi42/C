#include <stdio.h>
void display(int n, int m);
int main()
{
    int nums[5] = {1, 2, 3, 4, 5};
    printf("The array elements passed are\n");
    display(nums[3], nums[4]);
    return 0;
}
void display(int n, int m)
{
    printf("%d\t%d", n, m);
}
