/*Nome Arquivo: Exercicio013
Nome Autor: Sophia Mendes da Silveira
Finalidade: recebe um valor n, e repete os números de 1 até n conforme o seu valor. 
ex: 1
    22
    333
    4444
Data de criação: 10/08/2023*/

#include <stdio.h>

void imprime_numeros(int n) {

    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int n = 0;

    do{
        scanf("%d", &n);
    }while (n < 0);
    
    imprime_numeros(n);

  return 0;
}
