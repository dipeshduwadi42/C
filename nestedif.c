#include<stdio.h>

int main()
{
    int cls;   // Variable to store class number
    int fees;  // Variable to store fees amount

    // Taking class input from user
    printf("Enter the class: ");
    scanf("%d", &cls);

    // Taking fees input from user
    printf("Enter the fees: ");
    scanf("%d", &fees);

    // Checking class and updating fees accordingly
    if (cls < 10)
    {
        // For classes below 10
        if (fees < 20000)
        {
            fees = fees + 5000;   // Add 5000 if fees is less than 20000
        }
        else
        {
            fees = fees + 10000;  // Add 10000 if fees is 20000 or more
        }
    }
    else
    {
        // For class 10 and above
        fees = fees + 20000;      // Add 20000 to fees
    }

    // Displaying final fees
    printf("The final fees for class %d is %d\n", cls, fees);

    return 0;  // End of program
}
