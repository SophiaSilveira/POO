// Aluno.hpp

#ifndef _ALUNO.HPP
#define _ALUNO.HPP

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

        string ObtemNome();
        int obtemNumPresencas();
        char obtemPresenca(int d);
        string str();

        void defineNome();
        bool definePresenca(int i, char p);
        bool realizaChamada(char p);
};

#endif