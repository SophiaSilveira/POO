//app.cpp
#include <iostream>
#include "Televisor.hpp"

using namespace std;

int main(){
    int voluM, menorNC, maiorNC, trocaCanal = 0;
    cin >> voluM >> menorNC >> maiorNC;

    Televisor t(voluM, menorNC, maiorNC);

    char ent;

    while(ent != '.'){
        cin >> ent;

        if(ent == '<') t.diminuiVolume();
        else if(ent == '>') t.aumentaVolume();
        else if(ent == '^'){
            t.aumentaCanal();
             trocaCanal++;
        }
        else if(ent == 'v'){
            t.diminuiCanal();
            trocaCanal++;
        }
        else if(ent == 'c'){
            cin >> voluM;
            if(t.selecionaCanal(voluM) == true){
                trocaCanal++;
            } 

        }

    } 

    cout << "Volume: " << t.obtemVolume() << endl << "Canal: " << t.obtemCanal() << endl << "Troca canal: " << trocaCanal;
    return 1;
}