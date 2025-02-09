#include <stdio.h>

int main() {
    double a, b, c, avg;
    scanf("%lf %lf %lf", &a, &b, &c);
    avg = (a + b + c) / 3.0;
    printf("Average: %.2f\n", avg);
    return 0;
}
