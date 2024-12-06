#include <stdio.h>
int main() {
    int choice, num1, num2;
    do{
    printf("Menu: \n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter two numbers to add: ");
            scanf("%d %d", &num1, &num2);
            printf("Result %d\n", num1 + num2);
            break;
        case 2:
            printf("Enter two numbers to subtract: ");
            scanf("%d %d", &num1, &num2);
            printf("Result %d\n", num1 - num2);
            break;
        case 3:
            printf("Enter two numbers to multiply: ");
            scanf("%d %d", &num1, &num2);
            printf("Result  %d\n", num1 * num2);
            break;
        case 4:
            printf("Enter two numbers to divide: ");
            scanf("%d %d", &num1, &num2);
            printf("Result %d\n", num1 / num2);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    }while(choice <= 1 || choice >= 4);
    printf("Exiting the program, Goodbye! \n");
    return 0; 
}