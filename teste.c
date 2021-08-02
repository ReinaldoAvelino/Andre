#include <stdio.h>

void imprimir(int x) 
{
    printf("%i \n", x);
}

int soma(int a, int b) 
{
    return (a + b);
}

/* Teste, blabla
aaaaa
aaaa */

// aaaaaaaa

int soma2(int n) // soma todos os naturais menores do que n 
{
    /*
    int x = n;
    int soma = 0;
    while (x > 0) 
    {
        soma = soma + x;
        x = x - 1; // x--;
                   // x += -1;
    }
    */

    int i;
    int soma = 0;
    for(i = 1; i <= n; i++) 
    {
        soma += i;
    }

    return soma;

}

int main() 
{
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n); // se o input for 5
    int v[n];

    for (int i = 0; i < n; i++) 
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", v[i]);
    }
    

    return 0;
}


