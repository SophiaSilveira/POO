#include <iostream>
#define TAM 10

using namespace std;

typedef struct{
    int dia, mes, ano;
}data_n;

typedef struct{
    string nome;
    double altura;
    data_n nascimento;
}dados;

void salvaDados(dados p[], string info, int ind, int local){
    if(ind < TAM){
        switch (local){
        case 0:
            p[ind].nome = info;
            break;

        case 1:
            p[ind].altura = stod(info) ;
            break;
        
        case 2:
            p[ind].nascimento.dia = stoi(info);
            break;

        case 3:
            p[ind].nascimento.mes = stoi(info);
            break;

        case 4:
            p[ind].nascimento.ano = stoi(info);
            break;

        default:
            break;
        }
    }
}

void aniversariosMes(dados p[], string mes){
    int sinal = 1;

    for (int ind = 0; ind < TAM; ind++){
        if(p[ind].nascimento.mes == stoi(mes)){
            sinal = 0;
            cout << p[ind].nome << ";" << p[ind].altura << "00"<<";" << 
            p[ind].nascimento.dia << "," << p[ind].nascimento.mes << 
            "," << p[ind].nascimento.ano << endl;
        }
    }

    if(sinal){
        cout << "> SEM ANIVERSARIOS" << endl;
    }
}


int main(){

    dados pessoa[TAM];
    string linha;
    int i = 0;

    while(true){

        getline(cin, linha);

        if(linha == "+"){
            for(int rep = 0; rep < 5; rep++){
                getline(cin, linha);
                salvaDados(pessoa, linha, i, rep);
            }

            i < TAM ? cout << "> OK"  << endl : cout << "> VETOR CHEIO"  << endl;
            i++;
        }
        else if( linha == "."){
            getline(cin, linha);
            aniversariosMes(pessoa, linha);

            break;
        }
        else{
            cout << "> OPCAO INVALIDA" << endl;
        }
    }

    return 0;
}