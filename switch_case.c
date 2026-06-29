#include <stdio.h>

int main()
{
    int choice;
    printf("Menu:\n1. RC Cola\n2. Pepsi\n3. 7Up\n4. Mango Juice\n5. Cold Coffee\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("------Your Choice Is-----\n");

    switch (choice)
    {
    case 1:
        printf("You chose RC Cola\n");
        break;
    case 2:
        printf("You chose Pepsi\n");
        break;
    case 3:
        printf("You chose 7Up\n");
        break;
    case 4:
        printf("You chose Mango Juice\n");
        break;
    case 5:
        printf("You chose Cold Coffee\n");
        break;
    default:
        printf("Invalid choice!\n");
    }
    return 0;
}