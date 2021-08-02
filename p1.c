#include <stdio.h>

int main(void) 
{
    int soma = 0;
    for (int i = 1; i < 1000; i++) // Para cada i, veremos se eh multiplo de 3 ou 5
    {

        if (i % 3 == 0 || i % 5 == 0) // Se i for divisivel por 3 
        {
            soma += i;
        }

    }
    printf("%d", soma);
    return 0;
}