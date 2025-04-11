#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char* argv[]){
     
    int i = 0;
    int Nalunos;

    printf("Quantos alunos tem na sua turma: \n");
    scanf("%d", &Nalunos);

    float notas[Nalunos];

     for (i = 0; i < Nalunos; i ++){

        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);
    } 

      for (i = 0; i < Nalunos; i ++){
        printf("\n Nota do aluno %d: %.2f", i, notas[i]);
          
    }

    return 0;
}    