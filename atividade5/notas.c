#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
     
    int i = 0;
    int Nalunos;
    int qtdalunosaprovados = 0;

    float maiornota = 0;
    float somadasnotas = 0;
    float mediadaturma;
    float menornota = 10;

    printf("Quantos alunos tem na sua turma: \n");
    scanf("%d", &Nalunos);

    float notas[Nalunos];

     for (i = 0; i < Nalunos; i ++){

     do{ 
      printf("Digite a nota do aluno %d: \n", i + 1);
      scanf("%f", &notas[i]);   

      if (notas[i] < 0 || notas[i] > 10){
        printf("Nota invalida, digite novamente: \n");
      }
      if (maiornota < notas[i]){
        maiornota = notas[i];
      }
      if (menornota > notas[i]){
        menornota = notas[i];
      }
      
      if (notas[i] >= 6){
        qtdalunosaprovados++;
      }
      somadasnotas += notas[i];

    } while (notas[i] < 0 || notas[i] > 10);

  } 
    
  mediadaturma = somadasnotas / Nalunos;

  printf("\nA maior nota da turma foi: %.2f", maiornota);
  printf("\nA menor nota da turma foi: %.2f", menornota);
  printf("\nA quantidade de alunos aprovados foi: %d", qtdalunosaprovados);
  printf("\nA media da turma foi: %.2f", mediadaturma); 

  printf("\nVoce deseja ver a nota de algum aluno? (s/n): ");
  char resposta;
  scanf(" %c", &resposta);
  if (resposta == 's' || resposta == 'S'){
    int aluno;
    printf("Digite o numero do aluno (1 a %d): ", Nalunos);
    scanf("%d", &aluno);
    if (aluno >= 1 && aluno <= Nalunos){
      printf("A nota do aluno %d e: %.2f\n", aluno, notas[aluno - 1]);
    } else {
      printf("Numero de aluno invalido.\n");
    }
  } else if (resposta == 'n' || resposta == 'N'){
    printf("Obrigado por usar o programa!\n");
  } else {
    printf("Resposta invalida.\n");
  }


    return 0;
}    