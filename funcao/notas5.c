#include <stdio.h>

#define TAM_NOME 64

typedef struct Aluno{
    char nome[TAM_NOME];
    float nota;
} Aluno;

void imprimir_aluno(Aluno a){
    printf("%s - Nota: %.2f\n", a.nome, a.nota);
}

int main(int argc, char* argv[]){

    int n = 5;
    Aluno alunos[n];
    float soma_notas = 0.0;
    float nota_media;
    float maior_nota = 0.0;
    float menor_nota = 10.0;


for (int i = 0; i < n; i++){

    printf ("Digite o nome do aluno %d: \n", i + 1);
    getchar();
    fgets(alunos[i].nome, TAM_NOME , stdin);
    printf("Digite a nota do aluno %d: \n", i + 1);
    scanf("%f" , &alunos[i].nota);
    

    imprimir_aluno(alunos[i]);
    soma_notas += alunos[i].nota;
    if(maior_nota < alunos[i].nota){
        maior_nota = alunos[i].nota;
    }
    if(menor_nota > alunos[i].nota){
        menor_nota = alunos[i].nota;
    }
}

     
     nota_media = soma_notas / n;
    printf("\na nota media da turma eh %.2f\n", nota_media);
    printf("\na maior nota da turma eh %.2f\n", maior_nota);
    printf("\na menor nota da turma eh %.2f\n", menor_nota);




    return 0;
}    