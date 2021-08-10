#include <stdio.h>
#define MAX 50

void criarNula(int m, int n, int A[MAX][MAX]) { 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = 0;
        }
    }
}

void criar(int m, int n, int A[MAX][MAX])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("digite o elemento a_%d%d da matriz: ",i,j);
            scanf("%d", &A[i][j]);
        }
    }
}

void imprimir(int m, int n, int A[MAX][MAX])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

void interface()
{
    int matrizes[MAX][MAX][MAX];
    int num = 0;
    int m[MAX]; int n[MAX]; 
    int opcao = -1;
    while(opcao != 0)
    {
        printf("calculadora de matrizes: \n");
        printf("0 - sair \n");
        printf("1 - adicionar matriz \n");
        printf("2 - somar matrizes \n");
        printf("digite a sua opcao: ");
        scanf("%d", opcao);
        switch (opcao)
        {
            case 0:
            {
                printf("programa finalizado");
            }
            case 1:
            {
                printf("digite o numero de linhas da matriz a ser adicionada: ");
                scanf("%d",&m[num]);
                printf("\n digite o numero de colunas da matriz a ser adicionada: ");
                scanf("%d", &n[num]);
                criar(m[num], n[num], matrizes[num]);
                num++;

            }
            case 2:
            default: printf("opcao invalida, digite novamente");
        }
    }
}

int main()
{
    interface();
    return 0;
}