#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)        // Number of rows
    {
        for (j = 1; j <= i; j++)    // Stars in each row
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
