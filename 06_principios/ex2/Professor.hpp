// Professor.hpp

#ifndef _PROFESSOR_HPP
#define _PROFESSOR_HPP

#include <string>
#include "Pessoa.hpp"

using namespace std;

class Professor{
    private:
        int matricula;
        Pessoa *p;
        double salario;
    
    public:
        Professor(string n="", int m = 0, double s = 0.0);
        ~Professor();
        int obtematricula();
        void defineMatricula(int m);
        string obtemNome();
        void defineNome(string n);
        double obtemSalario();
        void defineSalario(double s);
        string str();
};

#endif