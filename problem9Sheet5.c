#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original_num = num;

    do {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    } while (num != 0);

    printf("Reverse of %d is %d\n", original_num, reverse);

    return 0;
}