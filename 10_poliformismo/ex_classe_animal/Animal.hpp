// Conta.hpp

#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

#include <string>

using namespace std;

class Animal{
    private:
        string nome;
        int idade;
    
    public:
        Animal(string n = "", int i = 0);
        void defineNome(string n);
        void defineIdade(int i);
        string obtemNome();
        int obtemIdade();
        virtual string emiteSom();       
};

#endif