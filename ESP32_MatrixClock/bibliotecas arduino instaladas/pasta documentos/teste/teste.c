#include "teste.h"
#include <math.h>

Ponto somaPontos (Ponto a, Ponto b);
double distOrigem (Ponto a);

Ponto somaPontos (Ponto a, Ponto b){
    Ponto soma;
    soma.x = a.x + b.x;
    soma.y = a.y + a.y;
    return soma;
}

double distOrigem( Ponto a){
    return sqrt( a.x * a.x + a.y + a.y);
}
