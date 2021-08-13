#include "complexo.h"

void modulo(struct complexo *z) {
    z.modulo = sqrt(pow(z.re, 2) + pow(z.im, 2));
}

int main() {
    struct complexo z;
    z.re = 3;
    z.im = 4;
    modulo(z);
    printf("%d \n", z.modulo);
    return 0; 
}