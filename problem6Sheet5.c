#include <stdio.h>
int main() {
    int len = 0;
    int input;
    int sum = 0;
    do{
        printf("Enter a positive number to find the average (to stop enter a negative number): \n");
        scanf("%d", &input);
        if(input >= 0){
        sum += input; 
        len++;
        }
    }
    while(input >= 0);
    printf("Average: %d \n", sum/len);
    printf("Sum = %d ", sum);
    return 0;
}