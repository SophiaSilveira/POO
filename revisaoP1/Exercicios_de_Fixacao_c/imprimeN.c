#include "stdio.h"

void imprimeN(int n){
    if(n == 0) return;
    imprimeN(n - 1);

    for(int qtd = 0; qtd < n; qtd++)
        printf("%d ", n);
    puts("");
}

int main(){

    int numero;

    scanf("%d", &numero);

    imprimeN(numero);

    return 1;
}