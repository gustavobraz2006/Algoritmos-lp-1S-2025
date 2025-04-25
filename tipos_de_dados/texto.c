#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define TAM 157

int main(int argc, char* argv[]){

    //Declaração de strings
    char palavra1[] = "Conhecimento";
    char palavra2[] = {'C','o','n','h','e','c','i','m','e','n','t','o'};
    // lê a string de acordo com a quantidade implícita
    char frase1[TAM];
    char palavra3[TAM];
    char palavra4[TAM];

    printf ("%s\n", palavra1); 
    printf ("%s\n", palavra2); 
    // apresenta o caractere na posição 4
    printf ("%c\n", palavra2[4]);

    printf("palavra2[4] = %c\n", palavra2[4]);

    printf("Digite uma frase: ");
    fgets(frase1, TAM, stdin);

    printf ("%s\n", frase1);

    printf("Digite uma palavra: ");
    fflush(stdin);
    fgets(palavra3, TAM, stdin); 

    printf("Digite outra palavra: ");
    fflush(stdin);
    fgets(palavra4, TAM, stdin); 

    if (strcmp(palavra3, palavra4) == 0){
        printf("As palavras sao iguais\n");
    }
    else {
        printf("As palavras NAO sao iguais\n");
    }

    printf ("\nTamanho da palavra3 eh: %d\n", strlen(palavra3) -1 );

    for(int i = 0; i < strlen(palavra3); i++){
        printf ("%c\n", palavra3[i]); 
    }

    //  imprime a palavra 3 ao contrário 

    for(int i = strlen(palavra3) -1; i>=0; i--){
        printf("\n%c", palavra3[i]);

    }

    //concatena  palavra 3 e palavra 4
    strcat(palavra3,palavra4);
    printf("\nPalavra 3 concatenada = %s", palavra3);

    return 0;
}    