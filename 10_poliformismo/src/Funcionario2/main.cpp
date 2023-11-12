#include <iostream>
#include "Funcionario.hpp"
#include "Professor.hpp"
#include "Pesquisador.hpp"

using namespace std;

int main() {
  Funcionario *vet[5];                                           // RESULTADO:
  vet[0] = new Funcionario(12340,"Carlos Saldanha",1000.0);      // Nome: Carlos Saldanha 630
  vet[1] = new Professor(12341,"Jose da Silva",1000.0,false);    // Nome: Jose da Silva 693
  vet[2] = new Pesquisador(12342,"Lisandro Barbosa",1000.0);     // Nome: Lisandro Barbosa 724.5
  vet[3] = new Professor(12343,"Carmem Borges",1000.0,true);     // Nome: Carmem Borges 787.5
  vet[4] = new Pesquisador(12344,"Luiza Prates",1000.0);         // Nome: Luiza Prates 724.5
  int numEmpregados = sizeof(vet)/sizeof(Funcionario *);
  for (int i=0; i<numEmpregados; ++i)
      cout << "Nome: " << vet[i]->obtemNome() << " " << vet[i]->obtemSalario() << endl;  
  for (int i=0; i<numEmpregados; ++i)
      delete vet[i];
  return 0;
}
