#include <stdio.h>
int main() {
    int number = 1;
    for(int i = 0; i <= 4; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ", number);
        }
        number++;
        printf("\n");
    }
}
