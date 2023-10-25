// Conta.hpp

#include "Animal.hpp"

Animal::Animal(string n, int i){
    nome = n;
    idade = i;
}

void Animal::defineNome(string n){ nome = n; }

void Animal::defineIdade(int i){ idade = i; }

string Animal::obtemNome(){ return nome; }

int Animal::obtemIdade(){ return idade; }

string Animal::emiteSom(){
    if(nome == "cachorro"){
        return "AU AU";
    }
    else if(nome == "gato"){
        return "Miauuu";
    }
    else if(nome == "passaro"){
        return "Piu Piu";
    }
    else{
        return "Não conhecemos este animal";
    }
}