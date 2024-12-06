#include <stdio.h>
int main() {
    int guess, constantNum, randomNum;
    constantNum = 1;
    printf("Welcome to the guessing game! \n");
    printf("Enter your guess between 1 and 100: \n");
    scanf("%d", &guess);
    randomNum = constantNum | guess;
    while(guess != randomNum){
        printf("Wrong guess! Enter another guess between 1 and 100: \n");
        scanf("%d", &guess); 
    }
    printf("Correct guess! %d was the number \n", randomNum);
    return 0;
}