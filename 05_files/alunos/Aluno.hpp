// Aluno.hpp

#ifndef _ALUNO_HPP
#define _ALUNO_HPP

#include <string>

#define MAX_PRESENCAS 100

using namespace std;

class Aluno {
private:
	string nome;
	int numPresencas;
	char presencas[MAX_PRESENCAS];
public:
	Aluno(string n = "");
	~Aluno();
	
	string obtemNome();
	int obtemNumPresencas();
	char obtemPresenca(int i);
	string str();
	
	void defineNome(string n);
	bool definePresenca(int i, char p);
	bool realizaChamada(char p);
	
	void limpaPresencas();
};

#endif
