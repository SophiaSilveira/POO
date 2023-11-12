#ifndef _PROFESSOR_HPP
#define _PROFESSOR_HPP

#include <string>
#include "Funcionario.hpp"

using namespace std;

class Professor : public Funcionario {
  private:
    bool titulado;
  public:
    Professor(int matricula, string nome, double salarioBase, bool titulado);
    double obtemSalario() const;
};
#endif
