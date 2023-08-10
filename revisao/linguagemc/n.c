#include <stdio.h>

int mult (int n) {
   if (n==1)
      return n;
   return mult(n-1) * n;
}

int main (void) {
   int n, i;
   i = 10;
   n = 2 * mult (i/2);
   printf("%d", n);
   return 0;
}