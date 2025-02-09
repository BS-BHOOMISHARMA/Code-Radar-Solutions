#include <stdio.h>

int main() {
    int temp;
    scanf("%d", &temp);

    if (temp <= 0) 
        printf("Freezing\n");
    else 
        printf("Above Freezing\n");

    return 0;
}
