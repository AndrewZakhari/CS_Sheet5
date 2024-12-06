#include <stdio.h>
int main() {
    char character = '*';
    for(int i = 0; i <= 4; i++){
        for(int j = 0; j <= i; j++){
            printf("%c ", character);
        }
        printf("\n");
    }
}