#include <stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
if (a > b) {
        printf("First\n");
    } 
    else if (a < b) {
        printf("Second\n");
    } 
    else {
        printf("Equal\n");
    }

    return 0;
}