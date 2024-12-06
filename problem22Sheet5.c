#include <stdio.h>
int main() {
    int choice;
    float num1, num2;
    do{
    printf("Menu: \n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n 0. Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 0:
            printf("Exiting the program, Goodbye! \n");
            return 0;
            break;
        case 1:
            printf("Enter two numbers to add: ");
            scanf("%f %f", &num1, &num2);
            printf("Result %f\n", num1 + num2);
            break;
        case 2:
            printf("Enter two numbers to subtract: ");
            scanf("%f %f", &num1, &num2);
            printf("Result %f\n", num1 - num2);
            break;
        case 3:
            printf("Enter two numbers to multiply: ");
            scanf("%f %f", &num1, &num2);
            printf("Result  %f\n", num1 * num2);
            break;
        case 4:
            printf("Enter two numbers to divide: ");
            scanf("%f %f", &num1, &num2);
            printf("Result %f\n", num1 / num2);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    }while(choice >= 1 || choice <= 4);
    
    printf("Exiting the program, Goodbye! \n");
    return 0; 
}