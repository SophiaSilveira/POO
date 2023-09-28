// Aplicacao.cpp (Sophia Mendes da Silveira; 24 set. 2023)

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "Aplicacao.hpp"

using namespace std;

Aplicacao::Aplicacao(){
    numCinemas = 0;
    numFilmes = 0;
    numProgramacao = 0;


    #ifdef DEBUG
        cout << "+ Aplicacao("<< numCinemas << " cinemas, " << numFilmes << " filmes, " << numProgramacao <<" programacao) - criado" << endl;
    #endif
}

Aplicacao::~Aplicacao(){
    #ifdef DEBUG
        cout << "- Aplicacao(cinemas, filmes, programacao) - destruido" << endl;
    #endif

    //delete[] *cinemas;
    for (int i = 0; i < MAX_FILMES; i++) {
        delete filmes[i];
    }
    //delete[] *programacao;
}

bool Aplicacao::carregaFilmes(string nomeArquivo){
    ifstream iff;
    iff.open(nomeArquivo, ios::in);
    if(!iff.is_open()) return false;

    while(1){
        filmes[numFilmes] = new Filme();
        iff >> *filmes[numFilmes];

        if(!iff.good()) break;
        
        ++numFilmes;
   }

    iff.close();
    return true;
}  


bool Aplicacao::salvaFilmes(string nomeArquivo){
    ofstream off;
    off.open(nomeArquivo, ios::out);
    if(!off.is_open()) return false;

    for(int i = 0; i < numFilmes; i++){
        off << *filmes[i];
    }

    off.close();
    return true;
}

void Aplicacao::mostraFilmes(){
    for(int i = 0; i < numFilmes; i++){
        cout << filmes[i]->str() << endl;
    }
}

void Aplicacao::ordenaFilmes(){
    for (int i = 1; i < numFilmes ; ++i) {
        Filme *base = filmes[i];
        int j = i -1;
        while ( j >=0 && base->operator<(*filmes[j])) {
            filmes[j +1] = filmes[j];
            --j;
        }

    filmes[j +1] = base;
    }
}

Filme *Aplicacao::obtemFilme(int id){
    if(id < 0 || id >= numFilmes) return nullptr;
    return filmes[id];
}

/*
// Segunda etapa - NÃO FEITA

bool Aplicacao::carregaCinemas(string nomeArquivo){ 
    return true;
}

bool Aplicacao::salvaCinemas(string nomeArquivo){
    return true;
}

void Aplicacao::mostraCinemas(){}
void Aplicacao::ordenaCinemas(){}

Cinema Aplicacao::*obtemCinema(int id){}

bool Aplicacao::carregaProgramacao(string nomeArquivo){ // Terceira etapa
    return true;
}

void Aplicacao::mostraProgramacao(){}*/