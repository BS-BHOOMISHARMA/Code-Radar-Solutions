#include <stdio.h>
#include <stdint.h>  

int main() {
    int32_t num;
    
    if (scanf("%d", &num) != 1) {
        printf("Invalid Input\n");
        return 1;
    }
    
    if (num & 1)
        printf("Set\n");
    else
        printf("Not Set\n");
    
    return 0;
}

