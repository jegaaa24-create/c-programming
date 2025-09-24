#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Greatest number is: %d\n", a);
    else if (b > a)
        printf("Greatest number is: %d\n", b);
    else
        printf("Both numbers are equal.\n");

    return 0;
}
