//8.  Faça um programa em C que insira um vetor de números de 10 posições do tipo inteiro e depois informe quais deles são pares.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int arr_nums[10]= {2,5,6,7,9,1,3,4,9,43};

    printf("Números pares no vetor:\n");

    for(int i=0; i<10;i++) {
        if(arr_nums[i]%2 == 0){
           printf("%d ",arr_nums[i]);
        }
    }

    return 0;
}