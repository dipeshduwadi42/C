#include <stdio.h>
#include <math.h>   // For pow() function

int main()
{
    int num, original, remainder, digits = 0;
    int result = 0;

    // Ask user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for comparison later
    original = num;

    // Loop to count the number of digits in the number
    while (original != 0)
    {
        original = original / 10;  // Remove last digit
        digits++;                  // Increase digit count
    }

    // Reset original number
    original = num;

    // Loop to calculate the Armstrong sum
    while (original != 0)
    {
        remainder = original % 10;                 // Get last digit
        result = result + pow(remainder, digits);  // Add digit^digits
        original = original / 10;                  // Remove last digit
    }

    // Check whether the number is Armstrong or not
    if (result == num)
        printf("It is an Armstrong number.\n");
    else
        printf("It is not an Armstrong number.\n");

    return 0;  // End of program
}
