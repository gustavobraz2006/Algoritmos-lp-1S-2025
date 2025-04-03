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
    printf("Seu imc eh: %.2f\n", imc);

    // Classificação do IMC

    if(imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } 
    
    if(imc > 18.5 && imc <= 24.9){
        printf("Classificacao: Peso normal\n");
    }

    if(imc > 24.9 && imc <= 29.9){
        printf("Classificacao: Sobrepeso\n") ;
    }
    
    if (imc > 29.9 && imc <= 34.9){
        printf("Classificacao: Obesidade I\n");
    }

    if (imc > 34.9 && imc <= 39.9){
        printf("Classificacao: Obesidade II\n");
    }

    if (imc > 39.9 ){
        printf("Classificacao: Obesidade III\n");
    }
    

    return 0;
}