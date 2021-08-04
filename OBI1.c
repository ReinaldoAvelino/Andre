#include <stdio.h> 

int f(int D) {
    int d;
    d = D - 3;
    d = d % 8; // compr arc de circ == 8
    if (d == 3) return 1;
    if (d == 4) return 2;
    if (d == 5) return 3;
    else return 0;

}

int main() { // UC - FD
    int D;
    scanf("%d", &D); // Input
    int output = f(D);
    printf("%d", output);
    return 0;
}