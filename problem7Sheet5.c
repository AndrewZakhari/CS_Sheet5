#include <stdio.h>
int main() {
    int i;
    printf("Enter a number: \n");
    scanf("%d", &i);
    printf("multiplication table for %d: \n", i);
    for( int j = 1; j <= 10; j++){
        printf("%d x %d = %d \n", i, j, i * j );
    }
}