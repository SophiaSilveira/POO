#include <iostream>
#include "tristate.hpp"

Tristate::Tristate(){
    state = 'I';
}

Tristate::~Tristate(){}

void Tristate::set(){
    state = 'V';
}

void Tristate::reset(){
    state = 'F';
}

void Tristate::dontknow(){
    state = 'I';
}

char Tristate::get(){
    return state;
}