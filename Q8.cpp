#include <stdio.h>
int main() {
    long long num; 
    int last6;
    printf("Enter a number: ");
    scanf("%lld", &num);
    last6 = num % 1000000;
    if (last6 % 3 == 0) {
        printf("The last 6 digits (%d) are divisible by 3.\n", last6);
    } else {
        printf("The last 6 digits (%d) are NOT divisible by 3.\n", last6);
    }
    return 0;
}
