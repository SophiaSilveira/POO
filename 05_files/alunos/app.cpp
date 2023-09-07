#include <iostream>
#include "Turma.hpp"

using namespace std;

int main() {
    Turma turma;

    if( !turma.lerArquivo("turma.txt")){
        cerr << "Impossível abrir o arquivo 'faltas.txt'..." << endl;
        return 1; 
    }

    turma.realizaChamada();
    turma.obtemAluno(0).

    if( !turma.salvaArquivo("faltas2.txt")){
        cerr << "Impossível abrir o arquivo 'faltas2.txt'..." << endl;
        return 1; 
    }

  return 0;
}
