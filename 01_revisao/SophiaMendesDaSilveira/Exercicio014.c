/*Nome Arquivo: Exercicio014
Nome Autor: Sophia Mendes da Silveira
Finalidade: recebe um ano e diz a que século ele pertence
Data de criação: 10/08/2023*/

#include <stdio.h>

int descobrir_seculo(int ano) {

    int sec = ano / 100;

    if(sec == 0) return 1;
    
    if (ano % 100 == 0){
        return sec; 
    }
    
    return sec + 1;
}

int main() {
    int ano = 0;

    do{
        scanf("%d", &ano);
    }while (ano < 0);
    
    printf("%d", descobrir_seculo(ano));

  return 0;
}
