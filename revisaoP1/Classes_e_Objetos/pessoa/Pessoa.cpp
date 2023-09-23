#include <iostream>
#include "Pessoa.hpp"

using namespace std;

Pessoa::Pessoa(){
    nome = "";
    idade = 0;
    peso = 0.0;
}

Pessoa::~Pessoa(){}

string Pessoa::obtemNome(){
    return nome;
}

int Pessoa::obtemIdade(){
    return idade;
}

double Pessoa::obtemPeso(){
    return peso;
}

void Pessoa::defineNome(string n){
    nome = n;
}

void Pessoa::defineIdade(int i){
    idade = i;
}

void Pessoa::definePeso(double p){
    peso = p;
}

void Pessoa::fazAniversario(){
    ++idade;
}

void Pessoa::engorda(double kg){
    peso += kg;
}
