#ifndef _PESQUISADOR_HPP
#define _PESQUISADOR_HPP

#include <string>
#include "Funcionario.hpp"

using namespace std;

class Pesquisador : public Funcionario {
  public:
    Pesquisador(int matricula, string nome, double salarioBase);
    double obtemSalario() const;
};
#endif
