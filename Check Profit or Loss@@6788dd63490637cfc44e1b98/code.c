#include <stdio.h>
int main()
{
    int cp,sp;
     scanf("%d%d", &cp,&sp);
    if (sp > cp)
        printf("Profit\n");
    else if (cp > sp)
        printf("Loss\n");
    else
        printf("No Profit No Loss\n");
    
    return 0;
}
