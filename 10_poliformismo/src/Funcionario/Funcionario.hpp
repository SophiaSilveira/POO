#ifndef _FUNCIONARIO_HPP
#define _FUNCIONARIO_HPP

#include <string>

using namespace std;

class Funcionario {
  private:
    int matricula;
    string nome;
    double salarioBase;
  public:
    Funcionario(int matricula, string nome, double salarioBase);
    int obtemMatricula() const;
    string obtemNome() const;
    double obtemSalario() const;
};
#endif
