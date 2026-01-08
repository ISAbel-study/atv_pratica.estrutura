// 3.  Faça um programa em C que diga quantos números pares existem de 1 a 1000.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int nums_pares;

    for(int i=1; i<1001;i++) {
        if(i%2 == 0) {
            nums_pares += 1;
        }
    }

    printf("Existem %d números pares de 1 a 1000", nums_pares);

    return 0;
}