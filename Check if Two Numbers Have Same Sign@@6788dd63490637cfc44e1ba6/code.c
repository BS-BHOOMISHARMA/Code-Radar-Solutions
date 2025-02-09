#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if ((a >= 0 && b >= 0) || (a < 0 && b < 0))
        printf("Same Sign\n");
    else
        printf("Different Sign\n");

    return 0;
}
