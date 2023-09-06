// Pessoa.hpp

#ifndef _PESSOA_HPP
#define _PESSOA_HPP

#include <string>

using namespace std;

class Pessoa {
    private:
        string nome;

    public:
	    Pessoa(string n = "");
        ~Pessoa();
        void defineNome(string n);
        string obtemNome();
};  

#endif
