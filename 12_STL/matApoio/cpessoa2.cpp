#include "cpessoa2.h"
#include <iostream>
using std::cout;
using std::string;


cpessoa::cpessoa(string n, int i)
{
   nome = n;
   idade = i;
}

void cpessoa::imprime() {
	cout <<"\nNome: "<<nome;
	cout <<"\nIdade: "<<idade;		
}

void cpessoa::setnome(string n) {
	nome=n;
}

void cpessoa::setidade(int i){
	idade=i;
}

string cpessoa::getnome()
{
   return nome;
}



