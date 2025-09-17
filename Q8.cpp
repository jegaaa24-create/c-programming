#include <stdio.h>

int main() {
    int number;


    printf("Enter a number: ");
    scanf("%d", &number);

    
    int lastDigit = number % 10;

    
    if (lastDigit % 3 == 0) {
        printf("The last digit (%d) is divisible by 3.\n", lastDigit);
    } else {
        printf("The last digit (%d) is not divisible by 3.\n", lastDigit);
    }

    return 0;
}
