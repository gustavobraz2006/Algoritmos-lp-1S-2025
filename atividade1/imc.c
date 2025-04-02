#include <stdio.h>
#include <math.h>

int main(int argc, char* argv []){ 
    float peso, altura, imc;
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);
    
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    
    float alturaQuadrada = powf(altura, 2);
  
    imc = peso / alturaQuadrada;
    printf("Seu imc é: %.2f\n", imc);

    return 0;
}