#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t num, n;
    scanf("%d %d", &num, &n);

    if (n < 0 || n > 31) {
        printf("Invalid bit position\n");
        return 1;
    }

    printf("%d\n", (num & (1 << n)) ? 1 : 0);

    return 0;
}

