#include <stdio.h>

int main() {
    int a, b;
    char ch;
    
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);

    printf("Enter any operator\n");
    scanf(" %c", &ch);  // space before %c to ignore leftover newline

    switch(ch) {
        case '+':
            printf("Addition is %d\n", a + b);
            break;
        case '-':
            printf("Subtraction is %d\n", a - b);
            break;
        case '*':
            printf("Multiplication is %d\n", a * b);
            break;
        case '%':
            printf("Modulo division is %d\n", a % b);
            break;
        case '/':
            printf("Division is %d\n", a / b);
            break;
        default:
            printf("Wrong Choice\n");
    }

    return 0;
}
