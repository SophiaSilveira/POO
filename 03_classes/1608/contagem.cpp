//objetos -> atributos e metodos
//classe -> define objeto

#include <iostream>

//#define DEBUG

using namespace std;

class Contador {
    private:
        int valor;

    public:
    
        Contador(int v = 0){
            valor = v;

            #ifdef DEBUG
            cout << "+Contador(" << valor << ") criado..." << endl;
            #endif
        }

        ~Contador(){ //Deleta elementos no fim do seu contexto, chaves {}, 
                        //se for global ele termina depois da main
                        //se for criada 1, 2 ,3. Vai ser deletado 3, 2, 1. POis estão em pilha

            #ifdef DEBUG
            cout << "-Contador( " << valor << ") destruido..." << endl;
            #endif
        }

        int obtemValor() { //Getter
            return valor;
            
            #ifdef DEBUG
            cout << "+Contador(" << valor << ") visto..." << endl;
            #endif
        }
        
        void incrementa() { //Mutator
            ++valor;

            #ifdef DEBUG
            cout << "+Contador(" << valor << ") incrementado..." << endl;
            #endif
        }

        void defineValor(int v){ //Mutator setter
            valor = v;

            #ifdef DEBUG
            cout << "+Contador(" << valor << ") definifo..." << endl;
            #endif
        }

        void zera(){ //Mutator
            valor = 0;

           #ifdef DEBUG
           cout << "+Contador(" << valor << ") zerado..." << endl;
           #endif
        }


};

Contador c7(1000);

void funcao(){
    Contador c8(-10);
}


int main() {
    Contador c1, c2(10);
    //Contador c3(); //protótippo e não objeto
    //Contador *c4;//ponteiro para objeto
    Contador *c5 = new Contador(100);

    cout << "c1: " << c1.obtemValor() << endl;
    cout << "c2: " << c2.obtemValor() << endl;

    delete c5;
    if(true){
        Contador c6(1000);
        c6.incrementa();
        funcao();
    }

    c1.incrementa();
    c2.incrementa();

    cout << "c1: " << c1.obtemValor() << endl;
    cout << "c2: " << c2.obtemValor() << endl;

    c1.defineValor(55);
    c2.defineValor(65);

    cout << "c1: " << c1.obtemValor() << endl;
    cout << "c2: " << c2.obtemValor() << endl;

    c1.zera();
    c2.zera();

    cout << "c1: " << c1.obtemValor() << endl;
    cout << "c2: " << c2.obtemValor() << endl;
    return 0;
}