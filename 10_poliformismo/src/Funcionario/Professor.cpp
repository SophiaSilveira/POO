#include "Professor.hpp"

Professor::Professor(int matricula, string nome, double salarioBase, bool titulado) : Funcionario (matricula, nome, salarioBase) {
  this->titulado = titulado;
}

double Professor::obtemSalario() const {
  double sal = Funcionario::obtemSalario();
  double adic;
  if (titulado)
     adic = sal * 0.25;
  else
     adic = sal * 0.1;
  return sal + adic;
}

