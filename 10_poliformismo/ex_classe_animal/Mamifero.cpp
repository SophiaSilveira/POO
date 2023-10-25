
#include "Mamifero.hpp"

Mamifero::Mamifero(bool m) {
    isM = m;
};
        
bool Mamifero::obtemIsMamifero(){ return isM; }

bool Mamifero::defineIsMamifero(bool m) { isM = m; }