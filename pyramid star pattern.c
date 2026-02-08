#include <stdio.h>

int main()
{
    int i, j, k;   // i → row counter, j → star counter, k → space counter

    // Outer loop controls the number of rows
    for (i = 1; i <= 4; i++)
    {
        // Loop to print leading spaces before stars
        for (k = 1; k <= 4 - i; k++)
            printf(" ");

        // Loop to print stars in each row
        for (j = 1; j <= i; j++)
            printf("* ");

        // Move to the next line after each row
        printf("\n");
    }

    return 0;  // End of program
}
