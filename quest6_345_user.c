//6.  Faça um programa em C que refaça a 3 últimas questões, modificando apenas na quantidade de números, pois, o usuário deverá informar a quantidade.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

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
    int nums_pares;
    int pares_i;

    printf("====NÚMEROS PARES====\n");
    
    printf("Verificar números pares de 0 até quanto?: ");
    scanf("%d",&pares_i);

    for(int i=1; i<pares_i;i++) {
        if(i%2 == 0) {
            nums_pares += 1;
        }
    }
    printf("\nExistem %d números pares de 1 a 1000", nums_pares);

    printf("\n====NÚMEROS ÍMPARES====");

    int nums_impar;
    int impar_i;

    printf("\nVerificar números ímpares de 0 até quanto?: ");
    scanf("%d", &impar_i);

    for(int i=1; i<impar_i;i++) {
        if(i%2 != 0) {
            nums_impar += 1;
        }
    }

    printf("\nExistem %d números ímpares de 1 a 1000", nums_impar);

    printf("\n====NÚMEROS PRIMOS====");

    int nums_primos=0;
    int primos_i;

    printf("\nVerificar números primos de 0 até quanto?: ");
    scanf("%d", &primos_i);

    for(int i=0; i<= primos_i;i++) {
        if(verificarPrimo(i)) {
           nums_primos += 1;
        }
    }

    printf("\nExistem %d números primos de 1 a 1000", nums_primos);

    return 0;
}