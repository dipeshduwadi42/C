#include <stdio.h>

int main()
{
    int num, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   // store original number

    while (num != 0)
    {
        remainder = num % 10;               // get last digit
        reverse = reverse * 10 + remainder; // build reverse number
        num = num / 10;                     // remove last digit
    }

    if (original == reverse)
        printf("It is a palindrome number.\n");
    else
        printf("It is not a palindrome number.\n");

    return 0;
}
