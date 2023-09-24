// Ponto.cpp (Roland Teodorowitsch; 12 abr. 2022)

#include <iostream>
#include <sstream>
#include <cmath>
#include "Ponto.hpp"

Ponto::Ponto(double x, double y) {
  this->x = x;
  this->y = y;
#ifdef DEBUG
  cout << "+ Ponto " << str() << " criado..." << endl;
#endif
}

Ponto::~Ponto() {
#ifdef DEBUG
  cout << "- Ponto " << str() << " destruído..." << endl;
#endif
}

double Ponto::obtemX() const {
  return x;
}

double Ponto::obtemY() const {
  return y;
}

void Ponto::defineX(double x) {
  this->x = x;
}

void Ponto::defineY(double y) {
  this->y = y;
}

double Ponto::distancia (const Ponto &p) const {
  return sqrt(pow(x-p.obtemX(),2)+pow(y-p.obtemY(),2));
}

Ponto Ponto::pontoMedio (const Ponto &p) const {
  return Ponto( (x+p.obtemX())/2.0, (y+p.obtemY())/2.0 );
}

string Ponto::str() const {
  stringstream ss;
  ss << "(" << x << "," << y << ")";
  return ss.str();
}

Ponto Ponto::operator+(const Ponto &p) const {
  return Ponto(x+p.obtemX(), y+p.obtemY());
}

Ponto Ponto::operator-(const Ponto &p) const {
  return Ponto(x-p.obtemX(), y-p.obtemY());
}

Ponto Ponto::operator-() const {
  return Ponto(-x, -y);
}

bool Ponto::operator==(const Ponto &p) const {
  return p.obtemX() == x && p.obtemY() == y;
}

bool Ponto::operator!=(const Ponto &p) const {
  return p.obtemX() != x || p.obtemY() != y;
}

void Ponto::operator=(const Ponto &p) {
  x = p.obtemX();
  y = p.obtemY();
}

ostream& operator<<(ostream& out,const Ponto& p) {
  out << p.str();
  return out;
}

istream& operator>>(istream& in,Ponto& p) {
  cout << "X: ";
  in >> p.x;
  cout << "Y: ";
  in >> p.y;
  return in;
}
