//Televisor.cpp
#include "Televisor.hpp"

Televisor::Televisor(int vM, int menC, int maiC){
    volumeMaximo = vM;
    canal = menorCanal = menC;
    maiorCanal = maiC;
    volume = 0;
}

Televisor::~Televisor(){}

void Televisor::aumentaVolume(){
    if(volume < volumeMaximo) ++volume;
}

void Televisor::diminuiVolume(){
    if(volume > 0) --volume;
}

void Televisor::aumentaCanal(){
    if( canal > maiorCanal) canal = menorCanal;
    ++canal;
}

void Televisor::diminuiCanal(){
    if( canal < menorCanal) canal = maiorCanal;
    --canal;
}

bool Televisor::selecionaCanal(int c){
    if(c >= menorCanal && c <= maiorCanal){
        canal = c;
        return true;
    } 

    return false;
}

int Televisor::obtemVolumeMaximo(){
    return volumeMaximo;
}

int Televisor::obtemVolume(){
    return volume;
}

int Televisor::obtemMenorCanal(){
    return menorCanal;
}

int Televisor::obtemMaiorCanal(){
    return maiorCanal;
}

int Televisor::obtemCanal(){
    return canal;
}
