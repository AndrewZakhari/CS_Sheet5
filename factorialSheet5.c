#include <stdio.h>

int main() {
    int i; 
    int factorial = 1;
    printf("Enter a number:");
    scanf("%d", &i);
    for(; i > 0; i--){
        factorial *= i;
    }
    printf("Factorial: %d \n", factorial);
    return 0;
}