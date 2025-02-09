#include <stdio.h>
#include <stdint.h>

void decimalToBinary(int32_t num) {
    int binary[32], i = 0;

    if (num == 0) {
        printf("0\n");
        return;
    }

    while (num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int32_t num;
    scanf("%d", &num);
    decimalToBinary(num);
    return 0;
}
