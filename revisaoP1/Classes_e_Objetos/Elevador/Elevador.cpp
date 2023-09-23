//Elevador.cpp

#include "Elevador.hpp"

Elevador::Elevador(int cap, int an){
    capacidade = cap;
    totalAndares = an;
    ocupacao = andarAtual = 0;
}

Elevador::~Elevador(){}

bool Elevador::entra(){
    if(ocupacao >= capacidade) return false;

    ++ocupacao;
    return true;
}

bool Elevador::sai(){
    if(ocupacao <= 0) return false;

    --ocupacao;
    return true;
}

bool Elevador::sobe(){
    if(andarAtual >= (totalAndares - 1)) return false;

    ++andarAtual;
    return true;
}

bool Elevador::desce(){
    if(andarAtual <= 0) return false;

    --andarAtual;
    return true;
}

int Elevador::obtemOcupacao(){
    return ocupacao;
}

int Elevador::obtemCapacidade(){
    return capacidade;
}

int Elevador::obtemAndarAtual(){
    return andarAtual;
}

int Elevador::obtemTotalAndares(){
    return totalAndares;
}