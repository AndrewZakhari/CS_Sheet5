#include <stdio.h>
int main() {
    int i;
    do{
        printf("Enter a number and to stop enter 0: \n");
        scanf("%d", &i);
    }while(i != 0);
    return 0;
}