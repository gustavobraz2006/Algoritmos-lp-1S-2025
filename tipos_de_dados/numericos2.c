#include <stdio.h>

int main(int argc, char* argv[]){
    int idade;
    float altura;
    float peso;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a altura: ");
    scanf("%d", &altura);
    printf("Digite o peso: ");
    scanf("%d", &peso);
    printf("A idade eh %d\n", idade);
    printf("A altura eh %.2f\nO eh %.2f\n", altura, peso);

    float dobro_peso = peso * 2.0;
    printf("O dobro do peso eh %.2f",dobro_peso);
 
    return 0;
}