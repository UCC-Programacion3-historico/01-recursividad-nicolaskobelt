#include "potencia.h"
unsigned int potencia(unsigned int base, unsigned int exp) {

    if(exp==0)
        return 1;
    unsigned int ant = potencia(base,exp-1);
    return base*ant;
}

