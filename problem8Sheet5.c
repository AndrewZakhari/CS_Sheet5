#include <stdio.h>

int main() {
    int i = 0;
    while (i <= 50) {
        int isPrime = 1;
        if (i <= 1) {
            isPrime = 0;
        } else {
            int j = 2;
            while (j * j <= i) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
                j++;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    return 0;
}