#include <stdio.h>
int main()
{
   char str[20];
   scanf("%[^\n]%*c", str);
   printf(" You entered:%s", str);

   return 0;
}
