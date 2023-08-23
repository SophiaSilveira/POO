//CElevador.cpp

#include <iostream>
#include "Elevador.hpp"

Elevador::Elevador( int cap, int total){
    inicializa(cap, total);
}

Elevador::~Elevador(){}

void Elevador::inicializa(int cap, int total){
  capacidadeTotal = cap;
  totalAndares = total;
  andarAtual = 0;
  pessoasPresentes = 0;
}

bool Elevador::entra(){
    if(pessoasPresentes  >= capacidadeTotal) return false;

    pessoasPresentes++;
    return true;
}

bool Elevador::sai(){
    if(pessoasPresentes  <= 0) return false;

    pessoasPresentes--;
    return true;
}

bool Elevador::sobe(){
    if(andarAtual >= totalAndares) return false;

    andarAtual++;
    return true;
}

bool Elevador::desce(){
    if(andarAtual  <= 0) return false;

    andarAtual--;
    return true;
}

int Elevador::obtemTotal() { return totalAndares;}
int Elevador::obtemCapacidade() { return capacidadeTotal;}
int Elevador::obtemAndar() { return andarAtual;}
int Elevador::obtemPessoas() { return pessoasPresentes;}
