//9. Faça um programa em C que acrescente ao código da questão 7 o fato de além de informar em qual posição do vetor estão os pares, também mostre cada número par.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int arr_nums[10]= {2,5,6,7,9,1,3,4,9,43};
    int ord=0; //ordenação

    printf("Números pares e suas posições no vetor:\n");

    for(int i=0; i<10;i++) {
        if(arr_nums[i]%2 == 0){
            ord += 1;
           printf("%d-Número Par: %d\n  Posição no Vetor: %d\n", ord, arr_nums[i], i);
        }
    }

    return 0;
}