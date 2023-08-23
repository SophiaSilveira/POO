//Elevador.hpp

#ifndef _ELEVADOR_HPP
#define _ELEVADOR_HPP

using namespace std;

class Elevador {
    private:
        int andarAtual, totalAndares, capacidadeTotal, pessoasPresentes;

    public:
        Elevador(  int cap, int total);
        ~Elevador();
        void inicializa( int cap, int total);
        bool entra();
        bool sai();
        bool sobe();
        bool desce();
        int obtemTotal();
        int obtemCapacidade();
        int obtemAndar();
        int obtemPessoas();
};

#endif