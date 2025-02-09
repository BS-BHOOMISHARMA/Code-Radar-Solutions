#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t num;
    scanf("%d", &num);

    if (num == 0) {
        printf("No set bit\n");
        return 1;
    }

    printf("%d\n", num & -num); 
}
