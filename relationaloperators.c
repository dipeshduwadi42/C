#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Using relational operators
    printf("%d == %d : %d\n", a, b, a == b);   // equal to
    printf("%d != %d : %d\n", a, b, a != b);   // not equal to
    printf("%d > %d  : %d\n", a, b, a > b);    // greater than
    printf("%d < %d  : %d\n", a, b, a < b);    // less than
    printf("%d >= %d : %d\n", a, b, a >= b);   // greater than or equal to
    printf("%d <= %d : %d\n", a, b, a <= b);   // less than or equal to

    return 0;
}
