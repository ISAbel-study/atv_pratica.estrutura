//5.  Faça um programa em C que diga quantos números primos existem de 1 a 1000.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Função que verifica se um número é primo
int verificarPrimo(int n) {
    int divisores = 0;

    // conta quantos divisores o número tem
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    // se tiver só 2 divisores (1 e ele mesmo), é primo
    if (divisores == 2) {
        return 1; // verdadeiro
    } else {
        return 0; // falso
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int nums_primos;

    for(int i=1; i<= 1000;i++) {
        if(verificarPrimo(i)) {
            nums_primos += 1;
        }
    }

    printf("Existem %d números primos de 1 a 1000", nums_primos);

    return 0;

}
