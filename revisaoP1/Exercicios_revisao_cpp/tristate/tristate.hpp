//tristate.hpp

#ifndef _TRISTATE_HPP
#define _TRISTATE_HPP

using namespace std;

class Tristate{
    private:
        char state;

    public:
        Tristate();
        ~Tristate();
        void set();
        void reset();
        void dontknow();
        char get();
};

#endif