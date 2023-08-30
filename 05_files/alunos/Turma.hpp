// Aluno.hpp

#ifndef _TURMA_HPP
#define _TURMA_HPP

#include "Aluno.hpp"

#define MAX_ALUNOS 100

using namespace std;

class Turma {
    private:
	    int numAlunos, numPresencas;
	    Aluno alunos[MAX_ALUNOS];
    public:
	    Turma();
	    ~Turma();
    
	    bool lerArquivo(string nomeArquivo);
        bool salvaArquivo(string nomeArquivo);
	    bool realizaChamada();

        string str();

        int obtemNumALunos();
        int obtemNumPresencas();
        Aluno &obtemAluno(int i);

};  

#endif
