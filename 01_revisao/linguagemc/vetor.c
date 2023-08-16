#include <stdio.h>

#define TAM 500

void imprime_vetor(int v[], int t) {
  for (int i = 0; i<t; ++i) {
      if (i>0) printf(" ");
      printf("%d", v[i]);
  }
  printf("\n");
}

int contagem(int v1[], int t1, int v2[], int t2) {
  int cont = 0;
  for (int i2=0; i2<t2-t1+1; ++i2) {
  	int achou = 1;
  	for (int i1=0; i1<t1; ++i1) {
  	    if ( v1[i1] != v2[i2+i1] ) {
  	       achou = 0;
  	       break;
  	    }
  	}
  	if ( achou )
  	   ++cont;
  }
  return cont;
}

int main() {
  int a[TAM], ta = 0;
  int b[TAM], tb = 0;
  
  scanf("%d", &ta);
  for (int i=0; i<ta; ++i)
      scanf("%d", &a[i]);
  // imprime_vetor(a,ta);
  scanf("%d", &tb);
  for (int i=0; i<tb; ++i)
      scanf("%d", &b[i]);
  // imprime_vetor(b,tb);

  printf("%d\n", contagem(a,ta,b,tb) );
      
  return 0;

}