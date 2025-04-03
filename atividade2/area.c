#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    char opcao;

    printf("area.c\n");
    printf("Escolha uma opcao: \n");
    printf("c - Circulo\n");
    printf("t - Triangulo\n");
    printf("z - Trapezio\n");
    printf("q - Quadrado\n");
    printf("r - Retangulo\n");
    printf("l - Losango\n");

    scanf("%c", &opcao);

    switch(opcao){
     
    case 'c':
       printf("Circulo\n");
       float raio;
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    float raioQuadrado = powf(raio,2);
    float areaCirculo = M_PI * raioQuadrado;
    printf("A area do circulo eh: %.2f\n", areaCirculo);
       break;
    case 't':
       printf("Triangulo\n");
       float base,altura;
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &altura);
    
    float areaTriangulo = (base * altura) / 2;
    printf("A area do triangulo eh: %.2f\n", areaTriangulo);

       break;
    case 'z':
       printf("Trapezio\n");

    float areaTrapezio = (baseMaior + baseMenor) * altura / 2;
    printf("A area do trapezio eh: %.2f\n", areaTrapezio);
    
       break;
    case 'q':
       printf("Quadrado\n");
       float lado;
     printf("Digite o valor do lado do quadrado: ");
     scanf("%f", &lado);

     float ladoQuadrado = powf(lado, 2);
     printf("A area do quadrado eh: %2.f\n", ladoQuadrado);

       break;   
    case 'r':
       printf("Retangulo\n");
       float base, altura;
    printf("Digite o valor da base do retangulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do retangulo: ");
    scanf("%f", &altura);

    float areaRetangulo = base * altura;
    printf("A area do retangulo eh: %.2f\n", areaRetangulo);

       break;   
    case 'l':
       printf("Losango\n");
       float diagonalMaior, diagonalMenor;
    printf("Digite o valor da diagonal maior do losango: ");
    scanf("%f", &diagonalMaior);
    printf("Digite o valor da diagonal menor do losango: ");
    scanf("%f", &diagonalMenor);
    
    float areaLosango = (diagonalMaior * diagonalMenor) / 2;
    printf("A area do losango eh: %.2f\n", areaLosango);

       break;
    default:
       printf("opcao invalida");
    
    }


    return 0;
}