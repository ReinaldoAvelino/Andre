#include <stdio.h>

/* ------ Falta terminar --------- */


// Imprime um vetor dado v, de comprimento n
void imprimir(int n, int v[n]) {
    printf("{");
    for (int i = 0; i < n-1; i++) {
        printf("%d, ", v[i]); 
    }
    printf("%d", v[n-1]);
    printf("}");
    printf("\n");
}

// Recebe um vetor v1 de tamanho n, e inverte-o no vetor v2
void inverter(int n, int v1[n], int v2[n]) {
    int j = n - 1;                                   
    for (int i = 0; i < n; i++) {
        v2[i] = v1[j];            
        j--;
    }
}

// Retorna um bool (1 ou 0)
int palindromo(int num) { // Vale ate um num numero de 100 digitos

    // Determina o numero de digitos do inteiro dado
    // Determinar o tamanho o vetor que sera necessario

    int x = num;
    int n = 0;           
    while (x != 0) {
        x = x / 10;
        n++;
    }
    int vi[n];

    // Monta um vetor inverso correspondente a tal inteiro
    x = num;
    int uni;
    int i = 0;
    while (x != 0) {               // ( && n < MAX)
        uni = x % 10;            /// 549
        x = x / 10;
        vi[i] = uni;             
        i++; 
    }

    // Obter o vetor inverso
    int v[n];
    inverter(n, vi, v);

    // Verificar se ambos os vetores sao iguais

    for (int i = 0; i < n; i++) {
        if (v[i] != vi[i]) return 0;
    }

    return 1;
}


/* ------ Modificado -------- */
void teste() {
    int n = 5;
    int v2[n];
    int v1[] = {1, 2, 3, 4, 5};
    inverter(n, v1, v2);
    imprimir(n, v1);
    imprimir(n, v2);
}
/* --------------------------- */

int p4() {
    // Produto de dois numeros de 3 digitos
    int maiorProduto = 0;
    int produto;
    for (int p = 1; p < 1000; p++) {
        for (int q = 1; q < 1000; q++) {
            produto = p*q;
            if (palindromo(produto)) {
                if (produto > maiorProduto) maiorProduto = produto;
            }
        }
    }
    return maiorProduto;
}

int main() {
    //teste();
    int x = p4();
    printf("O maior produto eh %d. \n", x);
    return 0;
}
