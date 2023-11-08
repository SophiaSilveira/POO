// exemplo3.cpp

#include <iostream>

using namespace std;

template <class T>
class Base {
  private:
    T tob;
  public:
    Base(T par=0): tob(par) {}

    virtual void fpoli( ) {
      cout << "base " << tob << endl;
    }
};

template <class T>
class Deriv : public Base<T> {
  private:
    T tod;
  public:
    Deriv(T parb=0, T pard=0) : Base<T>(parb), tod(pard) { }

    void fpoli() {
      cout << "deriv " << tod << endl;
    }
};

template <class T>
void f(Base<T>* ptb) {
  ptb->fpoli();
}

int main() {
  Deriv<int> i0;
  i0.fpoli();
  Base<int> i1(1);
  i1.fpoli();
  Base<float> *ptbf = new Base<float>(10.);
  ptbf->fpoli();
  f(ptbf);
  delete ptbf;
  ptbf = new Deriv<float>(20.,30.);
  ptbf->fpoli();
  f(ptbf);
  delete ptbf;
  return 0;
}

