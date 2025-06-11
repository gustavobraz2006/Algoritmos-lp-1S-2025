#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char* argv[]){

    if (argc !=4) {
        printf("Erro: Informe 3 argumentos válidos.\n");
        return 1;
    }

    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int esperado = atoi(argv[3]);

    if (min >= max) {
        printf("Erro: O valor mínimo deve ser menor que o máximo.\n");
        return 1;
    }

    if (esperado < min || esperado > max) {
        printf("Erro: O valor esperado deve estar entre %d e %d.\n", min, max);
        return 1;
    }

    srand(time(NULL));
    int sorteio = rand() % (max - min + 1) + min;
    int foi_sorteado = (sorteio == esperado);

    if (foi_sorteado) {
        printf("O número %d foi sorteado!\n", sorteio);
    } else {
        printf("O número %d não foi sorteado. O número sorteado foi %d.\n", esperado, sorteio);
    }

    FILE *arquivo = (fopen("sorteio.txt", "w"));
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo sorteio.txt.\n");
        return 1;
    }

    fprintf(arquivo, "Número mínimo: %d\n", min);
    fprintf(arquivo, "Número máximo: %d\n", max);
    fprintf(arquivo, "Número esperado: %d\n", esperado);
    fprintf(arquivo, "Número sorteado: %d\n", sorteio);
    fprintf(arquivo, "Foi sorteado: %s\n", foi_sorteado ? "Sim" : "Não");
    fclose(arquivo);
    printf("Resultados salvos em sorteio.txt.\n");
    printf("Sorteio concluído com sucesso!\n");

         

    return 0;
}    
