#include <iostream>
#include "Elevador.hpp"

using namespace std;

int main(){
    char c;
    int tentativa = 0, capacidade, total;
    cin >> capacidade >> total;
    Elevador e(capacidade, total);

    while(c != '.'){
        cin >> c;
        if( c == '+'){
           if (e.entra() == false) ++tentativa;
        }
        else if(c == '-'){
            e.sai();
        }
        else if(c == '^'){
            e.sobe();
        }
        else if(c == 'v'){
            e.desce();
        }
    }

    cout << e.obtemOcupacao() << endl << e.obtemAndarAtual() << endl << tentativa;
    
    return 1;
}