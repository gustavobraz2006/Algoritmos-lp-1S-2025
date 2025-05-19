#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "biblioteca.h"

int main(int argc, char* argv[]){

    int a, b, c;
    int menor;

    if (argc != 3 && argc != 4){
        printf("Digite 2 ou 3 numeros inteiros validos.\n");
        return 1;
    }
    else if (argc == 3){
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        menor = menor_2n(a, b);
        printf("O menor numero entre %d e %d eh: %d\n", a, b, menor);
    }
    else if (argc == 4){
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        c = atoi(argv[3]);
        menor = menor_3n(a, b, c);
        printf("O menor numero entre %d, %d e %d eh: %d\n", a, b, c, menor);
    }
    else {
        printf("Erro: argumentos invalidos.\n");
        return 1;
    }

    return 0;
}    