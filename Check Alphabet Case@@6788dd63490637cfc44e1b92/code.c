#include <stdio.h>
#include <ctype.h>
void main()
{
    char a;
    scanf("%ch",&a);
    if(isupper(a))
    printf("Uppercase");
    else if(islower(a))
    printf("Lowercase");
    else
    printf("Not an alphabet");
}