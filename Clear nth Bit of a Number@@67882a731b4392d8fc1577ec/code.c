#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t num, n;
    scanf("%d %d", &num, &n);

    if (n < 0 || n > 31) {
        printf("Invalid bit position\n");
        return 1;
    }

    num = num & ~(1 << n); 
    printf("%d\n", num);  
    return 0;
}
