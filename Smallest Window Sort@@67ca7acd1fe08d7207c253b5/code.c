// Your code here...#include <stdio.h>

int isprime(int num){

    if(num <  2) return 0;
    for(int i = 2; i * i <=num ; i++){
        if(num % i == 0) return 0;
    }
    return 1;
}
int main(){
    int n , num , i = 0;
    scanf("%d",&n);
   


    while (i < n) {
        scanf("%d\n", &num);
        printf("%d\n", isprime(num));
        i++;  // Increment counter
    }
    return 0;
}