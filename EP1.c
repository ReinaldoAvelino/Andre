#include <stdio.h>

// Dado uma matriz A de m linhas e n colunas, anula todos os seus elementos
void criarNula(int m, int n, int A[m][n]) { 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = 0;
        }
    }
}

// Dada duas matrizes, A e B, retorna em C, a soma das duas.
void somar(int m, int n, int A[m][n], int B[m][n], int C[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Dada duas matrizes, A e B, retorna em C, a subtracao das duas.
void subtrair(int m, int n, int A[m][n], int B[m][n], int C[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void interface() {

    // Menu
    int opcao;
    printf("Menu de opcoes: \n");
    printf("1) Adicionar matriz; \n");
    printf("2) Somar matrizes; \n");

    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1: {

        }
        // Algoritmo para adicionar matriz

        case 2: {

        }
        // Falta implementar algoritmo para somar

    }


    int m, n;
    printf("Numero de linhas da matriz: ");
    scanf("%d", &m);
    printf("\n");
    printf("Numero de colunas da matriz: ");
    scanf("%d", &n);
    printf("\n");

    // Teste
    int A[m][n];
    printf("Teste 1: %d \n", A[0][0]);
    criarNula(m, n, A);
    printf("Teste 2: %d \n", A[0][0]);
    
}

int main() {
    interface();
    return 0;
}
