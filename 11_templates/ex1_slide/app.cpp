#include <iostream>

using namespace std;

template <typename T>
void ordenaPorSelecao ( T a[], int N) {
    int i, j, indMenor;
    for ( i = 0; i < N - 1; i++) {
        indMenor = i;
        for ( j= i + 1 ; j < N; j++)
            if (a[j] < a[indMenor])
                indMenor = j ;
        if( indMenor != i) { T aux = a[i]; a[i] = a[indMenor]; a[indMenor] = aux; }
    }
}

template <typename T>
void imprime(const T *vet, int tam){
    for(int i = 0; i< tam; i++){
        if(i > 0) cout << " ";
        cout << vet[i]; 
    }
    cout << endl;
}


class Pessoa{
    private:
        string nome; int idade;
    public:
        Pessoa( string n = "", int i = 0) : nome(n), idade(i) {}
        bool operator<(Pessoa &p) { return nome < p.nome; }
        friend ostream &operator << (ostream &out, const Pessoa &p) { out << p.nome << " ("<< p.idade <<")"; return out;}
};


int main(){

    int v1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    ordenaPorSelecao(v1,10);
    imprime(v1, 10);

    string v2[] = {"E", "D", "C", "B", "A"};
    ordenaPorSelecao(v2, 5);
    imprime(v2, 5);

    Pessoa grupo[] = { Pessoa("Zorro", 30), Pessoa("Afonso", 60), Pessoa("Alice", 10)};
    ordenaPorSelecao(grupo, 3);
    imprime(grupo, 3);

    return 1;
}