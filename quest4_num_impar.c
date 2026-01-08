//4.  Faça um programa em C que diga quantos números ímpares existem de 1 a 1000.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int nums_impar;

    for(int i=1; i<1001;i++) {
        if(i%2 != 0) {
            nums_impar += 1;
        }
    }

    printf("Existem %d números ímpares de 1 a 1000", nums_impar);

    return 0;
}