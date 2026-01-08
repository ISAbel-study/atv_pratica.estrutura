//7. Faça um programa em C que o usuário insira um nome de até 10 caracteres e o programa informe quantas letras A ou a tem no nome.
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char nome[10];
    int letras_a;

    printf("Insira um nome de até 10 letras: ");
    scanf("%c", &nome);
    fgets(nome,11, stdin); //Lê até 10 caracteres + /n, o espaço
    nome[strcspn(nome, "\n")] = '\0';

    for(int i=0; i<10; i++) {
        if(nome[i] == 'A' || nome[i] == 'a'){
            letras_a += 1;
        }
    }
    
    printf("\nTem %d letras 'A' e 'a' no nome %s", letras_a, nome);

    return 0;
}