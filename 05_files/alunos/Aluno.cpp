// Aluno.cpp

#ifdef DEBUG
#include <iostream>
#endif
#include <sstream>
#include "Aluno.hpp"

Aluno::Aluno(string n) {
  nome = n;
  numPresencas = 0;
  #ifdef DEBUG
  cout << "+ Aluno(" << nome << ") criado..." << endl;
  #endif
}
	
Aluno::~Aluno() {
  #ifdef DEBUG
  cout << "- Aluno(" << nome << ") distruído..." << endl;
  #endif
}
	
string Aluno::obtemNome() { return nome; }
int Aluno::obtemNumPresencas() { return numPresencas; }

char Aluno::obtemPresenca(int i) {
  if (i<0 || i>=numPresencas) return 'X';
  return presencas[i];
}

string Aluno::str() {
  stringstream ss;
  ss << nome;
  for (int i=0; i<numPresencas; ++i)
      ss << " " << presencas[i];
  return ss.str();
}
	
void Aluno::defineNome(string n) { nome = n; }

bool Aluno::definePresenca(int i, char p) {
  if (i<0 || i>=numPresencas) return false;
  presencas[i] = p;
  return true;
}

bool Aluno::realizaChamada(char p) {
  if (numPresencas >= MAX_PRESENCAS) return false;
  presencas[ numPresencas++ ] = p;
  return true;
}

void Aluno::limpaPresencas() { numPresencas = 0; }