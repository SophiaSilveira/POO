#include<iostream>
using std::string;

class cpessoa {
	string nome;
	int idade;
public:
	cpessoa(string nome, int idade);
	void imprime();
    void setnome(string n);
	void setidade(int i);	
    string getnome();

};
