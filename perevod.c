#include <stdio.h>

int main (void)
{
   int a, i, j;
   int B[32];
   printf("Input a:\n");
   scanf ("%i", &a);
   i=0;
   while (a)
   {  
      B[i]=a&0x01;
      a=a>>1;
      i++;
   }
   for (j=i-1; j>=0; j--)
      printf("%i", B[j]);

    return (0);
}
