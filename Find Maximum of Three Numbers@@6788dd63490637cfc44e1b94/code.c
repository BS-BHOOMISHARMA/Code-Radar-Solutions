#include <stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("%d\n",a);
    else if(c>b&&a<c)
    printf("%d\n",c);
    else
    printf("%d\n",b);}