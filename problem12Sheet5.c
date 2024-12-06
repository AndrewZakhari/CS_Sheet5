#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    printf("Fibonacci series up to %d terms:\n", n);
    printf("%d, %d, ", fib[0], fib[1]);

    for (i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d, ", fib[i]);
    }

    printf("\n");

    return 0;
}