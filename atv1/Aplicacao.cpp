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

    for (int i = 0; i < MAX_FILMES; i++) {
        filmes[i] = nullptr;
    }


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
    ifstream ff;

   ff.open(nomeArquivo, ios::in);

    if(!ff.is_open()) false;

    do{
        string numero, titulo, faixaE, estilo;

        if (!getline(ff, numero) || !getline(ff, titulo) || !getline(ff, faixaE) || !getline(ff, estilo))
                break;

        filmes[numFilmes] = new Filme(stoi(numero), titulo, stoi(faixaE), estilo);
        ++numFilmes;

   } while(ff.good());

    ff.close();
    return true;
}  


bool Aplicacao::salvaFilmes(string nomeArquivo){
    return true;
}

void Aplicacao::mostraFilmes(){

}

void Aplicacao::ordenaFilmes(){

}

Filme Aplicacao::*obtemFilme(int id){

    return nullptr;
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