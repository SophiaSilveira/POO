#include <stdio.h>

int fibonacci(int n) {
  if (n <= 1)
    return 0;
  if (n == 2)
    return 1;
  return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
  int n;
  int pares = 0, zeros = 0, impares = 0;
  while (1) {
        scanf("%d", &n);
        if ( n < 1) break;
        int fib = fibonacci(n);
        if ( fib % 2 == 0 ) {
           ++pares;
           if ( fib == 0 ) ++zeros;
        }
        else
           ++impares;
  }
  printf("%d %d %d\n", pares, impares, zeros);
  return 0;
}
