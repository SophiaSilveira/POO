#include "stdio.h"
#define MAX 30

int soma(int v[], int tam){
    int qtd = 0;

    for(int i = 0; i <(tam -2); i++){
        if(v[i] + v[i+1] == v[i+2]) ++qtd;
    }

    return qtd;
}

int main(){
    int numeros[MAX];
    int n;

    for(int i = 0; i < MAX; i++){   
       // printf("Entre com %d: ", i+1);     
        scanf("%d", &n);
        numeros[i] = n;
    }

    n = soma(numeros, MAX);

    printf("%d", n);

    return 1;
}
