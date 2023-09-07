/*
Nome do arquivo: Exercicio013
Nome do autor: Sophia Mendes da Silveira
Finalidade do programa: Classe Ponto
Data de criacao: 25/08/2023
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// implementacao da classe Ponto
class Ponto { 
    private:
        double x, y;

    public:
        Ponto(){
            x = 0;
            y = 0;
        }

        Ponto(double abcissa, double ordenada){
            x = abcissa;
            y = ordenada;
        }

        void defineX(double abcissa){
            x = abcissa;
        }

        void defineY(double ordenada){
            y = ordenada;
        }

        double obtemX(){
            return x;
        }

        double obtemY(){
            return y;
        }

        double distancia(double abcissa2, double ordenada2){
            return sqrt(pow((x - abcissa2), 2) + pow((y - ordenada2), 2));
        }
};

void mostraPonto(Ponto &p) {
    cout << "(" << fixed << setprecision(4) << p .obtemX() << " , " << p.obtemY() << ")" << endl;
}

int main() {
    Ponto p1;
    mostraPonto(p1);
    p1.defineX(1.5);
    p1.defineY(2.4);
    mostraPonto(p1);
    Ponto p2(5.5,2.4);
    mostraPonto(p2);
    Ponto p3(5.5,5.4);
    mostraPonto(p3);
    cout << fixed << setprecision(4) << p1.distancia(5.5,2.4) << " ";
    cout << fixed << setprecision(4) << p2.distancia(5.5,5.4) << " ";
    cout << fixed << setprecision(4) << p3.distancia(1.5,2.4) << endl;
    Ponto origem(1.2,3.4);
    for (int i=0; i<5; ++i) {
        for (int j=0; j<5; ++j)
            cout << fixed << setprecision(4) << origem.distancia(i+5.6,j+7.8) << " ";
        cout << endl;
    }
    return 0;
}