#include <stdio.h>
int main()
{
    int choice;
    printf("Enter your choice number: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Facebook");
            break;
        case 2:
            printf("Google\n");
            break;
        case 3:
            printf("Youtube\n");
            break;
        default:
            printf("Wrong choice");
    }
    return 0;
}
