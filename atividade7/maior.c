#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "biblioteca.h"

int main(int argc, char* argv[]){

    int a, b, c;
    int maior;

    if (argc != 3 && argc != 4){
        printf("Digite 2 ou 3 numeros inteiros validos.\n");
        return 1;
    }
    else if (argc == 3){
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        maior = maior_2n(a, b);
        printf("O maior numero entre %d e %d eh: %d\n", a, b, maior);
    }
    else if (argc == 4){
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        c = atoi(argv[3]);
        maior = maior_3n(a, b, c);
        printf("O maior numero entre %d, %d e %d eh: %d\n", a, b, c, maior);
    }
    else {
        printf("Erro: argumentos invalidos.\n");
        return 1;
    }



    return 0;
}    
