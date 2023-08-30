// Turma.cpp

#include <fstream>
#include <sstream>
#include "Turma.hpp"

Turma::Turma(){
    numAlunos = 0;
};

Turma::~Turma(){};

bool Turma::lerArquivo(string nomeArquivo){
    ifstream fin;
    fin.open(nomeArquivo, ios::in);
    if ( !fin.is_open() ) return false;
    int numAlunos, numPresencas;
    fin >> numAlunos >> numPresencas;
    if(numAlunos < 0 || numAlunos >=MAX_ALUNOS )

    this->numAlunos = numAlunos;
    this->numPresencas = numPresencas;

    for (int i=0; i<numAlunos; ++i) {
      string n;
      fin >> n;
      alunos[i].defineNome(n);
      for (int j=0; j<numPresencas; ++j) {
          char c;
          fin >> c;
          alunos[i].realizaChamada(c);
      }
  }
  fin.close();
  return true;
};

bool Turma::salvaArquivo(string nomeArquivo){

};

bool Turma::realizaChamada(){

};

string Turma::str(){

};

int Turma::obtemNumALunos(){

};

int Turma::obtemNumPresencas(){

};

Aluno &Turma::obtemAluno(int i){
    return alunos[i];
};
