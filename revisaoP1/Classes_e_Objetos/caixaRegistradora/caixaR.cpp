#include <iostream>

using namespace std;


class CaixaRegistradora {
  private:
    double precoTotal;
    int numItens;
  public:
    CaixaRegistradora(){
        precoTotal = 0.0;
        numItens = 0;
    };
    ~CaixaRegistradora(){};
    void adicionaItem(double preco){
        precoTotal +=preco;
        numItens++;
    }; 
    double obtemTotal(){
        return precoTotal;
    };             
    int obtemNumItens(){
        return numItens;
    };             
    void limpa(){
        precoTotal = 0.0;
        numItens = 0;
    };                    
};

int main(){

    CaixaRegistradora caixa;

    char c;
    double valor, soma = 0.0;
    int itens = 0;

    while(c != '.'){

        cin >> c;

        if(c == 'C'){
            caixa.limpa();
        }
        else if(c == '+'){
            cin >> valor;
            caixa.adicionaItem(valor);
        }
        else if(c == '='){
            soma += caixa.obtemTotal();
        }
        else if(c == '#'){
            itens += caixa.obtemNumItens();
        }
        else if (c == '.'){
            break;
        }

       
    }
     cout << soma << endl;
     cout << itens;
}