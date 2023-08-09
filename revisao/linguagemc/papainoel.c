#include <stdio.h>
#include <stdlib.h>

#define TAM 7000

void imprime_vetor(int v[], int t) {
  for (int i = 0; i<t; ++i) {
      if (i>0) printf(" ");
      printf("%d", v[i]);
  }
  printf("\n");
}

int contagem(char v1[]) {
  int cont = 0;
  for (int i=0; i<TAM; ++i) {
    if(cont == -1) return i;
  	if(v1[i] == '('){
        cont++;
    }
    else if(v1[i] == ')'){
        cont--;
    }
  }
  return cont;
}

int main() {
  char ta[TAM];
  
  scanf("%s", ta);

  printf("%d\n", contagem(ta));

      
  return 0;

}