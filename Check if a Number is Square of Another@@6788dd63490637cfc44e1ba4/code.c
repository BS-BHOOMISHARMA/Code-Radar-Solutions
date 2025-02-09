#include <stdio.h>

int isSquare(int a, int b) {
    return (a * a == b) || (b * b == a);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (isSquare(a, b)) 
        printf("Yes\n");
    else 
        printf("No\n");

    return 0;
}
