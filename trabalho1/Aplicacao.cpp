// Aplicacao.cpp (Sophia Mendes da Silveira; 01 out. 2023)

#include <fstream>
#include <iostream>
#include <sstream>
#include "Aplicacao.hpp"

Aplicacao::Aplicacao(){
    numCinemas = 0;
    numFilmes = 0;
    numProgramacao = 0;
    
    for (int i = 0; i < MAX_FILMES; i++)
        filmes[i] = nullptr;
    
    for (int i = 0; i < MAX_CINEMAS; i++)
        cinemas[i] = nullptr;

    for (int i = 0; i < MAX_PROGRAMACAO; i++)
        programacao[i] = nullptr;

    #ifdef DEBUG
        cout << "+ Aplicacao("<< numCinemas << " cinemas, " << numFilmes << " filmes, " << numProgramacao <<" programacao) - criado" << endl;
    #endif
}

Aplicacao::~Aplicacao(){
    #ifdef DEBUG
        cout << "- Aplicacao(cinemas, filmes, programacao) - destruido" << endl;
    #endif

    for (int i = 0; i < numFilmes; i++)
        delete filmes[i];

    for (int i = 0; i <= numCinemas; i++) 
        delete cinemas[i];

    for (int i = 0; i <= numProgramacao; i++)
        delete programacao[i];
}

bool Aplicacao::carregaFilmes(string nomeArquivo){
    numFilmes = 0;

    ifstream iff;
    iff.open(nomeArquivo, ios::in);
    if(!iff.is_open()) {
        salvaFilmes("filmes.txt.out");
        return false;
    }

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
    for(int i = 0; i < numFilmes; i++){
        if(filmes[i]->obtemNumero() == id) return filmes[i];
    }

    return nullptr;
}

bool Aplicacao::carregaCinemas(string nomeArquivo){
    numCinemas = 0;
     
    ifstream ifc;
    ifc.open(nomeArquivo, ios::in);

    if(!ifc.is_open()){
        salvaCinemas("cinemas.txt.out");
        return false;
    } 

    while(1){
        cinemas[numCinemas] = new Cinema();
        ifc >> *cinemas[numCinemas];
        
        if(!ifc.good()) break;
        ++numCinemas;
    }

    ifc.close();
    return true;
}

bool Aplicacao::salvaCinemas(string nomeArquivo){
    ofstream ofc;
    ofc.open(nomeArquivo, ios::out);
    if(!ofc.is_open()) return false;

    for(int i = 0; i < numCinemas; i++){
        ofc << *cinemas[i];
    }

    ofc.close();
    return true;
}

void Aplicacao::mostraCinemas(){
    for(int i = 0; i < numCinemas; ++i){
        cout << cinemas[i]->str() << endl;
    }
}

void Aplicacao::ordenaCinemas(){
    for (int i = 1; i < numCinemas ; ++i) {
        Cinema *base = cinemas[i];
        int j = i -1;
        while ( j >=0 && base->operator<(*cinemas[j])) {
            cinemas[j +1] = cinemas[j];
            --j;
        }

    cinemas[j +1] = base;
    }
}

Cinema* Aplicacao::obtemCinema(int id){
    for(int i = 0; i < numCinemas; i++){
        if(cinemas[i]->obtemNumero() == id) return cinemas[i];
    }

    return nullptr;
}

bool Aplicacao::carregaProgramacao(string nomeArquivo){ 
    ifstream ifp;
    string aux;
    ifp.open(nomeArquivo, ios::in);
    if(!ifp.is_open()) return false;

    while(ifp.good()){
        programacao[numProgramacao] = new Programacao();

        if(getline(ifp, aux))
            programacao[numProgramacao]->defineCinema(obtemCinema(stoi(aux)));

        if(getline(ifp, aux)) 
            programacao[numProgramacao]->defineSala(stoi(aux));
        
        if(getline(ifp, aux))
            programacao[numProgramacao]->defineFilme(obtemFilme(stoi(aux)));
        
        if(getline(ifp, aux))programacao[numProgramacao]->defineTipoDeExibicao(stoi(aux));

        getline(ifp, aux);
        programacao[numProgramacao]->defineHorarios(aux);
        
        if(!ifp.good()) break;
        ++numProgramacao;
   }

    ifp.close();
    return true;

}

void Aplicacao::mostraProgramacao(){
    string nome;
    int sala;

    for(int i = 0; i < numCinemas; ++i){
        cout << cinemas[i]->obtemNome() << endl << endl;
        sala = cinemas[i]->obtemSalas();

        for (int s = 1; s <= sala; ++s){
            for(int p = 0; p < numProgramacao; ++p){
                if(cinemas[i] == programacao[p]->obtemCinema() && programacao[p]->obtemSala() == s) {
                        cout << programacao[p]->str(false) << endl;
                }    
            }
        }

        cout << endl;
    }
}