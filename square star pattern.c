#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)        // Rows
    {
        for (j = 1; j <= 4; j++)    // Columns
        {
            printf("* ");
        }
        printf("\n");              // New line after each row
    }

    return 0;
}
