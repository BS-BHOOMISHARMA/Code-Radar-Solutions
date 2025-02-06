#include <stdio.h>

int main() {
    int a, b;

    // Get user input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Checking conditions properly
    if (a > 0 && b < 0) {
        printf("True\n");
    } else if (a < 0 && b > 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
