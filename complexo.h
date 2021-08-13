#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <math.h>

struct complexo {
    // Atributos
    int re;
    int im;
    int modulo;
    int conjugado;
};

// Metodos
void modulo(struct complexo z);

#endif // COMPLEXO_H