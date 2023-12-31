/*
3 Crie funções para imprimir os elementos de vetor. Para varrer o vetor, não utilize índices,
use apenas aritmética de ponteiros. Faça isto para os vetores de inteiros e de reais.
*/

#include <iostream>

using namespace std;

void imprimeInt(int vet[]){
    for(; *vet <= 10; vet++)
        cout << *vet << endl;
}

void imprimeDouble(double vet[]){
    for(int i = 0; i < 10; vet++, i++)
        cout << *vet << endl;
}


int main(){

    int *vetInt = new int[10];
    double *vetDouble = new double[10];

    for(int i = 0; i < 10; i++)
         vetInt[i] = i + 1;

    for(int i = 0; i < 10; i++)
        vetDouble[i] = (i/5.2) * 3.5;

    imprimeInt(vetInt);

    cout << endl;

    imprimeDouble(vetDouble);
    return 0;
}