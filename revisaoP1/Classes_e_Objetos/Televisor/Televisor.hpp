//Televisor.hpp

#ifndef _TELEVISOR_HPP
#define _TELEVISOR_HPP

#include <iostream>

using namespace std;

class Televisor{
    private: 
        int volumeMaximo, volume, menorCanal, maiorCanal, canal;
    
    public:
        Televisor(int vM = 20, int menC = 1, int maiC = 99);
        ~Televisor();
        void aumentaVolume();
        void diminuiVolume();
        void aumentaCanal();
        void diminuiCanal();
        bool selecionaCanal(int c);
        int obtemVolumeMaximo();
        int obtemVolume();
        int obtemMenorCanal();
        int obtemMaiorCanal();
        int obtemCanal();
};

#endif