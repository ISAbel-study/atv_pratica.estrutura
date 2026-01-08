// 2.  Faça um programa em C que receba o nome de um produto, seu preço e mostre o nome, o preço, o valor a pagar à vista com desconto de 10%.
#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
#include <string.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char nome_prodt[25];
    float preco;
    float preco_desc;//preco com descont

    printf("Digite o nome do produto: ");
    scanf("%c", &nome_prodt);
    fgets(nome_prodt, 50, stdin);  // Lê até 49 caracteres + \0
    // Remove o \n que o fgets captura
    nome_prodt[strcspn(nome_prodt, "\n")] = '\0';

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    
    preco_desc = preco - (preco * 0,1);
            //desconto menos o preço  //deconto de 10%

    printf("Nome Do Produto: %s\n", nome_prodt);
    printf("Preço: %.2f\n", preco);
    printf("Preço com desconto de 10%, se pagar a vista: %2.f", preco_desc);

    return 0;
}