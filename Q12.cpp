#include <stdio.h>
int main() {
    int num, lastDigit;
    printf("Enter an integer: ");
    scanf("%d", &num);
    lastDigit = num % 10; 
    if (lastDigit % 2 == 0) {
        printf("The last digit, %d, is even.\n", lastDigit);
    } else {
        printf("The last digit, %d, is odd.\n", lastDigit);
    }
    return 0;
}
