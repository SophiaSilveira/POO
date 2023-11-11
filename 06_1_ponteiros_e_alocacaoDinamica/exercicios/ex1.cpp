/*1 Analise a classe do programa abaixo e crie os métodos necessários para o armazenamento
dos dados digitados pelo usuário.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

class VetorDinamico {
    private:
     int *vet;
     int qtd = 0;
    // colocar os argumentos que voce achar necessario
    public:
        VetorDinamico(int num = 0){
            vet = (int *) malloc(num*sizeof(int));
        }
        ~VetorDinamico(){}
        void aumentaVetor(int vet[]){
            int more_vet = (int )realloc(vet, (2*qtd)*sizeof(int));
        }
        void adiciona(int n) {
            if(qtd >=10) aumentaVetor(vet);
            vet[qtd++] = n; 
        }

        int getQtdDados() { return qtd; }

        int getDado(int i) { return vet[i]; }
};
int main () {

VetorDinamico V1(5);

int dado;

    do {
        cin >> dado ;
        if(dado > 0) V1.adiciona(dado) ; else break ;
    } while (1);

    for ( int i =0; i < V1.getQtdDados() ; i ++)
        cout << V1.getDado(i) << endl ;
return 0;
}