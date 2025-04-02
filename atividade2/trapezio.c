#include <stdio.h>
#include <math.h>

int main (int argc, char* argv[]){
    float baseMaior, baseMenor, altura;
    printf("Digite o valor da base maior do trapezio: ");
    scanf("%f", &baseMaior);
    printf("Digite o valor da base menor do trapezio: ");
    scanf("%f", &baseMenor);
    printf("Digite o valor da altura do trapezio: ");
    scanf("%f", &altura);

    float areaTrapezio = (baseMaior + baseMenor) * altura / 2;
    printf("A area do trapezio eh: %.2f\n", areaTrapezio);
    

    return 0;
}