#include <stdio.h>

int main(){
    int n,i,sum=0;          // n = user input, i = loop counter, sum = total sum

    printf("Enter a natural number: "); // Ask user for input
    scanf("%d",&n);                     // Read the natural number

    for(i=1;i<=n;i++){                  // Loop from 1 to n
        sum=sum+i;                      // Add each number to sum
    }

    printf("Sum of first %d natural numbers = %d",n,sum); // Display result
    return 0;                           // End of program
}
