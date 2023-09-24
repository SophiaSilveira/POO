#include <iostream>
#include "tristate.hpp"

using namespace std;

int main(){
    Tristate a;

    cout << a.get() << endl;

    a.set();
    cout << a.get() << endl;

    a.reset();
    cout << a.get() << endl;

    a.dontknow();
    cout << a.get() << endl;

    return 1;
}