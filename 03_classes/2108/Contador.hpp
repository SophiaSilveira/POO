//Contagem.hpp
#ifndef _CONTADOR_HPP 
#define _CONTADOR_HPP

using namespace std;

class Contador {
    private:
        int valor;

    public:
        static const int DEFAULT = 0;
        Contador(int v = DEFAULT);
        ~Contador();
        int obtemValor();
        void incrementa();
        void defineValor(int v);
        void zera();
};

#endif