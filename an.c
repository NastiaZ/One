#include <stdio.h>

int main (void)
{
   int a, n=31;
   printf("Input a:\n");
   scanf ("%i", &a);
   if (!a)
   {
      printf("%i", 0);
      return 0;
   } 
   while(!(a&(1<<n)))
      n--;
   while (n+1)
   { 
      printf("%i", !!(a&(1<<n)));
      n--;
   }

    return (0);
}
