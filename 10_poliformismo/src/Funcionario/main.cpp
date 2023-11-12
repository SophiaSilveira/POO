#include <iostream>
#include "Funcionario.hpp"
#include "Professor.hpp"
#include "Pesquisador.hpp"

using namespace std;

int main() {
  Professor prof(12341,"Jose da Silva",1000,true);
  Pesquisador pesq(12342,"Lisandro Barbosa",1000);
  Funcionario *funPr, *funPe;
  Professor *pr;
  Pesquisador *pe;
  pr    = &prof;
  funPr = &prof;
  pe    = &pesq;
  funPe = &pesq;
  // Conforme o tipo de ponteiro, uma versao diferente do metodo obtemSalario() sera chamada
  cout << "pr->obtemSalario():    " << pr->obtemSalario() << endl;    // 787.5
  cout << "pe->obtemSalario():    " << pe->obtemSalario() << endl;    // 724.5
  cout << "funPr->obtemSalario(): " << funPr->obtemSalario() << endl; // 630
  cout << "funPe->obtemSalario(): " << funPe->obtemSalario() << endl; // 630
  return 0;
}

