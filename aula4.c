#include <stdio.h>

void troca(int *p, int *q) {
    int var;
    var = *p;
    *p = *q;
    *q = var;
}


void trocaErrada(int a, int b) {
    int var;
    var = a;

}

int main() {
    int v1[5] = {10, 20, 30, 40, 50};
    //            ^
    //            v2
    //  *(v2+3) ====== v2[3]
    int *v2 = &(v1);
    
    printf("%d \n", v1[3]);
    printf("%d \n", *(v2+3));
    printf("%d \n", v2[3]);
    return 0;          
}