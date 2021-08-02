#include <stdio.h> // header file

void imprimir()
{
    printf("Teste");
}

int main() 
{
    int x = 10;
    float y = 8.4;
    printf("%i %.2f \n", x, y);
    imprimir();
    printf("\n");
    printf("Hello World!");
    return 0;
}