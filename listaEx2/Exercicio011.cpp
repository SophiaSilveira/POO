#include <iostream>

using namespace std;


typedef struct{
    int dia, mes, ano;
}data_n;

typedef struct{
    string nome;
    float altura;
    data_n nascimento;
}pessoa;


int main(){

    string linha;

    while(true){
        getline(cin, linha);
        if(linha == "+"){
            cout << "LEITURA "  << endl;
            getline(cin, linha);

            int dia = stoi(linha);
            cout << "[ " << dia << " ]" << endl;


        }
        else if( linha == "."){
            break;
        }
        else{
            cout << "> OPCAO INVALIDA" << endl;
        }
    }

    return 0;
}