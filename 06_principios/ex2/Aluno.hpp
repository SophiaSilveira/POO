// ALuno.hpp

#ifndef _ALUNO_HPP
#define _ALUNO_HPP

#include <string>
#include "Pessoa.hpp"

using namespace std;

class Aluno{
    private:
        int matricula;
        Pessoa *p;

    public:
        Aluno(string n = "", int m = 0);
        ~Aluno();
        int obtemMatricula();
        void defineMatricula(int m);
        string obtemNome();
        void defineNome(string n);
        string str();
};

#endif

