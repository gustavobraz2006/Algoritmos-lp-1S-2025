#include <stdio.h>
#include <math.h>

int main(int argc, char* argv []){
    float base, altura;
    printf("Digite o valor da base do retangulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do retangulo: ");
    scanf("%f", &altura);

    float areaRetangulo = base * altura;
    printf("A area do retangulo eh: %.2f\n", areaRetangulo);
    
    return 0;
}