#include <stdio.h>

void insertion(int n, int v[n]) {
    int var;
    for (int i = 1; i < n; i++) {                      
        for (int j = i-1; j >= 0; j--) {               
            if (v[j] > v[j+1]) { // Se houver troca
                var = v[j+1]; v[j+1] = v[j]; v[j] = var;   
            }
            else break;
        }
    }
}

void imprimir(int n, int v[n]) {
    printf("{");
    for (int i = 0; i < n-1; i++) {
        printf("%d, ", v[i]); 
    }
    printf("%d", v[n-1]);
    printf("}");
    printf("\n");
}

int main() {
    int v[] = {5, 8, 13, 49, 12, 10};
    //         ^  ^               ^
    //         0  1               5
    //  5, 8, 13, 12, 49, 10
    // 5, 8, 12, 13, 49, 10
    // 5, 8, 12, 10 , 49
    // 5, 8, 10, 12, 49

    // Algoritmos de ordenacao 
    // Insertion Sort, Selection Sort; Bubble Sort;

    // 
    /*
    imprimir(6, v);
    insertion(6, v);
    imprimir(6, v);
    */
   printf("%d \n", 2 == 3);
   // False, True 
    // 0 -> false; 1 -> true
    if (0) printf("T1 \n");
    if (1) printf("T2 \n");
    if (10) printf("T3 \n");

    return 0;
}
