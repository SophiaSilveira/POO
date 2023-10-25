// Conta.hpp

#ifndef _MAMIFERO_HPP
#define _MAMIFERO_HPP

#include "Animal.hpp"

using namespace std;

class Mamifero: Animal{
    private:
        bool isM;
    public:
        Mamifero(bool m = false);
        bool obtemIsMamifero();
        bool defineIsMamifero(bool m);

};

#endif