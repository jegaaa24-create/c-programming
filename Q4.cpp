#include <stdio.h>
int main() {
    int num1, num2, diff;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    
    diff = num1 - num2;

    if (diff % 2 == 0) {
        printf("The difference (%d) is even.\n", diff);
    } else {
        printf("The difference (%d) is odd.\n", diff);
    }

    return 0;
}
