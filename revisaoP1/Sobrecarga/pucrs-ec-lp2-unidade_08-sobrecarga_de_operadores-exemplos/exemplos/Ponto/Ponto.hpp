// Ponto.hpp (Roland Teodorowitsch; 12 abr. 2022)

#ifndef _PONTO_HPP_
#define _PONTO_HPP_

#include <string>

using namespace std;

class Ponto {
  private:
    double x,y;
  public:
    Ponto(double x=0, double y=0);
    ~Ponto();
    double obtemX() const;
    double obtemY() const;
    void defineX(double x);
    void defineY(double y);
    double distancia(const Ponto &p) const;
    Ponto pontoMedio(const Ponto &p) const;
    string str() const;
    Ponto operator+(const Ponto &p) const;
    Ponto operator-(const Ponto &p) const;
    Ponto operator-() const;
    bool operator==(const Ponto &p) const;
    bool operator!=(const Ponto &p) const;
    void operator=(const Ponto &p);
    friend ostream& operator<<(ostream& out,const Ponto& p);
    friend istream& operator>>(istream& in,Ponto& p);
};

#endif
