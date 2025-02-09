#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t num, pos = 0;
    scanf("%d", &num);

    if (num == 0) {
        printf("No set bit\n");
        return 0;
    }

    while ((num & 1) == 0) {
        num >>= 1;  
        pos++;  
    }

    printf("%d\n", pos); 

    return 0;
}
