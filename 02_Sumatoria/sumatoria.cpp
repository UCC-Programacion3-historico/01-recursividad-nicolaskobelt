#include "sumatoria.h"
#include <iostream>
using namespace std;

int sumatoria(int *arr, unsigned int size) {
    if (size==0)
        return 0;
    
    cout<<"Valor previo: "<<arr[size-1]+sumatoria(arr,size-1)<<endl;
    return arr[size-1]+sumatoria(arr,size-1);
}