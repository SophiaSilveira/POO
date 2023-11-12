#include "Pesquisador.hpp"

Pesquisador::Pesquisador(int matricula, string nome, double salarioBase) : Funcionario (matricula, nome, salarioBase) {}

double Pesquisador::obtemSalario() const {
  double sal = Funcionario::obtemSalario();
  double adic = sal * 0.15;
  return sal + adic;
}

