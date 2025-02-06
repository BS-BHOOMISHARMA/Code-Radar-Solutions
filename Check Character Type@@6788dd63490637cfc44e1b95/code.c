#include <stdio.h>
#include <ctype.h>

void main() {
    char a;
    scanf("%c", &a);
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || 
        a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
        printf("Vowel");
    }
    else if (isalpha(a)) {
        printf("Consonant");
    }
    // If not a vowel or consonant, it is a special character
    else {
        printf("Special character");
    }
}
