#include <stdio.h>
#include <math.h>

int main (int argc, char* argv []){
    float raio;
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    float raioQuadrado = powf(raio,2);
    float areaCirculo = M_PI * raioQuadrado;
    printf("A area do circulo eh: %.2f\n", areaCirculo);

    return 0;
  
}