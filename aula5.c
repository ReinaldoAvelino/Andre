#include <stdio.h>
#include <math.h>

// Retorna a exponencial b^n
int expo1(int b, int n) {
    int produto = 1;
    for (int i = n; i >= 1; i--) {
        produto *= b;
    }
    return produto;
}

// Retorna a exponencial b^n
// Funcao recursiva
int expo2(int b, int n) {
    if (n == 1) return b; // Caso base
    else return ( b*expo2(b, n-1) );
}

void testeExpo() {
    int x = expo1(2, 3);
    printf("%d \n", x);
    int y = expo2(2, 3);
    printf("%d \n", y);
}

/* -------------------- DATAS ------------------ */
struct dma {   // */*/*
    int dia;
    int mes;
    int ano;
};

typedef struct dma data;

void imprimirData(data d) {
    printf("%d/%d/%d \n", d.dia, d.mes, d.ano);
}

void testeDMA() {
    struct dma hoje;
    hoje.dia = 13;
    hoje.mes = 8;
    hoje.ano = 2021;

    printf("O data de hoje eh: %d/%d/%d. \n", hoje.dia, hoje.mes, hoje.ano);

}

// dias em dias
data fimEvento (data inicio, int duracao) {
    data delta;
    delta.dia = 0;
    delta.mes = 0;
    delta.ano = 0;
    
    int dias = duracao;                 // dias = 31

    // Precisamos comecar a calcular o delta.dia
    delta.dia = duracao % 30;                      // 30/12/2021 +
                                                   // 31 dias
                                                   // 1/1/0
                                                   // 31/13/2021
                                                   // 1/2/2022
    if (dias > 360) {
        delta.ano = dias / 360;               
        dias = dias % 360;
    }

    if (dias > 30) {
        delta.mes = dias / 30;             // 35 / 30 == 1
        dias = dias % 30;                  // 35 % 30 == 5
    }

    delta.dia = dias;

    data fim;
    fim.ano = inicio.ano + delta.ano;
    fim.mes = inicio.mes + delta.mes;
    fim.dia = inicio.dia + delta.dia;

    if (fim.dia > 30) {
        fim.mes += fim.dia / 30;
        fim.dia = fim.dia % 30;
    }

    if (fim.mes > 12) {
        fim.ano += fim.mes / 12;
        fim.mes = fim.mes % 12;
    }

    return fim;
}

void testeFimEvento() {
    data inicio;
    inicio.dia = 30;
    inicio.mes = 12;
    inicio.ano = 2021;
    int duracao;
    duracao = 31;
    data fim;
    fim = fimEvento(inicio, duracao);
    imprimirData(fim);
}

/* ----------------------- DATAS --------------------- */

// Definicao de um numero complexo
struct complexo {
    // Atributos
    int re; // Real
    int im; // Imaginario
    int modulo;
    int conjugado;
    
};

int modulo(int a, int b) {
    int modulo = sqrt(expo1(a, 2) + expo1(b, 2));
    return modulo;
}

void testeComplexo() {
    struct complexo z; // z eh um objeto
    struct complexo w;
    z.re = 3;
    z.im = 4;
    z.modulo = modulo(z.re, z.im);
    printf("%d \n", z.modulo);

}

struct Lista {
    // Atributos (privadas)
    
    // Metodos (publicas)
    /*
    lista.append();
    lista.pop();
    lista.sort();
    */
};

int main() {
    testeFimEvento();
    return 0;
}
