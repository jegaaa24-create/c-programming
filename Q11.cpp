#include <stdio.h>
int main() {
    int num, firstDigit;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    if (num < 100 || num > 999) {
        printf("Invalid input. Please enter a 3-digit number.\n");
        return 1; 
}
    firstDigit = num / 100;
    if (firstDigit % 2 == 0) {
        printf("The first digit (%d) is even.\n", firstDigit);
    } else {
        printf("The first digit (%d) is odd.\n", firstDigit);
    }
    return 0; 
}
