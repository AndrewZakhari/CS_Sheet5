#include <stdio.h>

int main() {
    int num, reverse = 0, remainder, original_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original_num == reverse) {
        printf("%d is a palindrome number\n", original_num);
    } else {
        printf("%d is not a palindrome number\n", original_num);
    }

    return 0;
}