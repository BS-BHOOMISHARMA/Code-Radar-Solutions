#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num == 0) 
        printf("-1\n");
    else 
        printf("%d\n", ~num);
    return 0;
}
