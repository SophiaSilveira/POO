//Elevador.hpp

#ifndef _ELEVADOR_HPP
#define _ELEVADOR_HPP

#include <iostream>

using namespace std;

class Elevador {
    private:
        int ocupacao;
        int capacidade;
        int andarAtual;
        int totalAndares;
    public:
        Elevador(int cap=8, int an=10);
        ~Elevador();
        bool entra();
        bool sai();
        bool sobe();
        bool desce();
        int obtemOcupacao();
        int obtemCapacidade();
        int obtemAndarAtual();
        int obtemTotalAndares();
};

#endif