//Pessoa.hpp

#ifndef _PESSOA_HPP
#define _PESSOA_HPP

#include <string>

using namespace std;

class Pessoa {
  private:
    string nome;
    int idade;    
    double peso;  
  public:
    Pessoa();
    ~Pessoa();
    string obtemNome();
    int obtemIdade();
    double obtemPeso();
    void defineNome(string n);
    void defineIdade(int i);
    void definePeso(double p);
    void fazAniversario();
    void engorda(double kg);
};

#endif