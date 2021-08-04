#include <stdio.h>

// Dado uma matriz A de m linhas e n colunas, anula todos os seus elementos
void criarNula(int m, int n, int A[m][n]) { 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = 0;
        }
    }
}

void interface() {
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
