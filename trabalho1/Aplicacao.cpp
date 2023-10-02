// Aplicacao.cpp (Sophia Mendes da Silveira; 01 out. 2023)

#include <fstream>
#include <iostream>
#include <sstream>
#include "Aplicacao.hpp"

Aplicacao::Aplicacao(){ //construtor
    numCinemas = 0;
    numFilmes = 0;
    numProgramacao = 0;

    //app1 apresenta segmention fault sem a implementação abaixo
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

Aplicacao::~Aplicacao(){//destrutor
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

bool Aplicacao::carregaFilmes(string nomeArquivo){ //le as informações do arquivo, abre/fecha o arquivo fornecido
    numFilmes = 0;

    ifstream iff;
    iff.open(nomeArquivo, ios::in);
    if(!iff.is_open()) {
        salvaFilmes("filmes.txt.out");
        return false;
    }

    while(1){
        filmes[numFilmes] = new Filme();

        //utiliza o método de sobrecarga >> istram da classe filme
        iff >> *filmes[numFilmes];
        
        if(!iff.good()) break;
        ++numFilmes;
   }

    iff.close();
    return true;
}  


bool Aplicacao::salvaFilmes(string nomeArquivo){ //escreve informações em um arquivo, abre/fecha o arquivo fornecido
    ofstream off;
    off.open(nomeArquivo, ios::out);
    if(!off.is_open()) return false;

    for(int i = 0; i < numFilmes; i++){
        //utiliza o método de sobrecarga << ostream da classe filme
        off << *filmes[i];
    }

    off.close();
    return true;
}

void Aplicacao::mostraFilmes(){ //percorre o vetor de filmes imprimindo seu metodo str
    for(int i = 0; i < numFilmes; i++){
        cout << filmes[i]->str() << endl;
    }
}

void Aplicacao::ordenaFilmes(){ //Utiliza selection on sort para ordenar o vetor de filmes
    for (int i = 1; i < numFilmes ; ++i) {
        Filme *base = filmes[i];
        int j = i -1;

        //utiliza a sobrecarga < filmes para retornar um booleam de base < *filmes[j]
        while ( j >=0 && base->operator<(*filmes[j])) { 
            filmes[j +1] = filmes[j];
            --j;
        }

        filmes[j +1] = base;
    }
}

//verifica se o localicador(numero) filme exite em um objeto filme e o retorna 
Filme *Aplicacao::obtemFilme(int id){ 
    for(int i = 0; i < numFilmes; i++){
        if(filmes[i]->obtemNumero() == id) return filmes[i];
    }

    return nullptr;
}

bool Aplicacao::carregaCinemas(string nomeArquivo){ //le as informações do arquivo, abre/fecha o arquivo fornecido
    numCinemas = 0;
     
    ifstream ifc;
    ifc.open(nomeArquivo, ios::in);

    if(!ifc.is_open()){
        salvaCinemas("cinemas.txt.out");
        return false;
    } 

    while(1){
        cinemas[numCinemas] = new Cinema();
        //utiliza o método de sobrecarga >> istream da classe cinema
        ifc >> *cinemas[numCinemas];
        
        if(!ifc.good()) break;
        ++numCinemas;
    }

    ifc.close();
    return true;
}

bool Aplicacao::salvaCinemas(string nomeArquivo){ //escreve informações em um arquivo, abre/fecha o arquivo fornecido
    ofstream ofc;
    ofc.open(nomeArquivo, ios::out);
    if(!ofc.is_open()) return false;

    for(int i = 0; i < numCinemas; i++){
        //utiliza o método de sobrecarga << ostream da classe cinema
        ofc << *cinemas[i];
    }

    ofc.close();
    return true;
}

void Aplicacao::mostraCinemas(){ //percorre o vetor de cinema imprimindo seu metodo str
    for(int i = 0; i < numCinemas; ++i){
        cout << cinemas[i]->str() << endl;
    }
}

void Aplicacao::ordenaCinemas(){ //Utiliza selection on sort para ordenar o vetor de cinemas
    for (int i = 1; i < numCinemas ; ++i) {
        Cinema *base = cinemas[i];
        int j = i -1;

        //utiliza a sobrecarga < cineas para retornar um booleam de base < *cinemas[j]
        while ( j >=0 && base->operator<(*cinemas[j])) {
            cinemas[j +1] = cinemas[j];
            --j;
        }

        cinemas[j +1] = base;
    }
}

//verifica se o localicador(numero) cinema exite em um objeto cinema e o retorna 
Cinema* Aplicacao::obtemCinema(int id){
    for(int i = 0; i < numCinemas; i++){
        if(cinemas[i]->obtemNumero() == id) return cinemas[i];
    }

    return nullptr;
}

bool Aplicacao::carregaProgramacao(string nomeArquivo){ //le as informações do arquivo, abre/fecha o arquivo fornecido
    ifstream ifp;
    string aux;
    ifp.open(nomeArquivo, ios::in);
    if(!ifp.is_open()) return false;

    //retira as informações utilizando getline e uma verificação para a conversão de inteiros quando necessário
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

    //passa pelo vetor de cinema
    for(int i = 0; i < numCinemas; ++i){
        cout << cinemas[i]->obtemNome() << endl << endl;
        sala = cinemas[i]->obtemSalas();

        //laço para a quantidade de salas
        for (int s = 1; s <= sala; ++s){

            //laço para o vetor de programçao
            for(int p = 0; p < numProgramacao; ++p){

                //verificação para inprimir quando cinema = obj.cinema da programação
                //e sala programação igual a sala no laço para as salas
                if(cinemas[i] == programacao[p]->obtemCinema() && programacao[p]->obtemSala() == s) {
                        cout << programacao[p]->str(false) << endl;
                }    
            }
        }

        cout << endl;
    }
}