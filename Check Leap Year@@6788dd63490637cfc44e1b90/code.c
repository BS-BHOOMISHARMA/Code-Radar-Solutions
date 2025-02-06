#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    printf((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    printf("Leap year");
    else
    printf("Not a Leap Year");
}