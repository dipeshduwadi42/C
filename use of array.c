#include <stdio.h>   // Header file for input and output functions

int main()
{
    int a[3];        // Declare an integer array of size 3
    int i;           // Loop variable

    printf("Enter 3 numbers:\n");   // Ask user to enter numbers

    // Loop to take input from the user
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);         // Store input in array
    }

    printf("You entered:\n");       // Display message

    // Loop to display array elements
    for(i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);        // Print each element
    }

    return 0;       // End of program
}
