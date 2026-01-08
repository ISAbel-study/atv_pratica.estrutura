//1.  Faça um programa em C que o usuário insira 4 números e mostre a soma deles e a sua média
#include "stdio.h"
#include "stdlib.h"
#include "windows.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num;
    float media;
    int soma=0 ;

    for(int i=0; i<4;i++) {
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num);
        soma += num;
    }
    
    media = soma/4.0;

    printf("SOMA Dos Números: %d\nMÉDIA Dos Números: %.2f", soma, media);

    return 0;
}