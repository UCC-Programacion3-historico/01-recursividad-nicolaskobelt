#include "../06_repaso/repaso_02.h"

int producto (int a, int b){
    int prod;

    if (b == 0)
        return prod;

    producto(a, b - 1)+a;
}

