//
// Created by Nicolas Kobelt on 20/9/17.
//

#include <iostream>
#include "../01_Potencia/potencia.h"

using namespace std;

unsigned int potencia(unsigned int base, unsigned int exp) {

    if(exp==0)
        return 1;

    unsigned int ant = potencia(base,exp-1);
    cout<<"Calculo previo: "<<base*ant<<endl;
    return base*ant;
}