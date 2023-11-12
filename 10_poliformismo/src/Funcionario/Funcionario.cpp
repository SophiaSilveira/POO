#include "Funcionario.hpp"

using namespace std;

Funcionario::Funcionario(int matricula, string nome, double salarioBase) {
  this->matricula = matricula;
  this->nome = nome;
  this->salarioBase = salarioBase;
}

int Funcionario::obtemMatricula() const {
  return matricula;
}

string Funcionario::obtemNome() const {
  return nome;
}

double Funcionario::obtemSalario() const {
  double inss = salarioBase * 0.1;
  double irpf = salarioBase * 0.27;
  return salarioBase - inss - irpf;
}
