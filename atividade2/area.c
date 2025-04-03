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
    float perimetroCirculo;
    perimetroCirculo = 2 * M_PI * raio;
    printf("O perimetro do circulo eh: %.2f\n", perimetroCirculo);
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
    float perimetroTriangulo, lado1tri, lado2tri, lado3tri;
    printf("Digite o valor do lado 1 do triangulo: ");
    scanf("%f", &lado1tri);
    printf("Digite o valor do lado 2 do triangulo: ");
    scanf("%f", &lado2tri);
    printf("Digite o valor do lado 3 do triangulo: ");
    scanf("%f", &lado3tri);
    perimetroTriangulo = lado1tri + lado2tri + lado3tri;
    printf("O perimetro do triangulo eh: %.2f\n", perimetroTriangulo);
    break;

    case 'z':
       printf("Trapezio\n");
       float baseMaior, baseMenor, h;
    printf("Digite o valor da base maior do trapezio: ");
    scanf("%f", &baseMaior);
    printf("Digite o valor da base menor do trapezio: ");
    scanf("%f", &baseMenor);
    printf("Digite o valor da altura do trapezio: ");
    scanf("%f", &h);

    float areaTrapezio = (baseMaior + baseMenor) * h / 2;
    printf("A area do trapezio eh: %.2f\n", areaTrapezio);
    float lado1trap, lado2trap, perimetroTrapezio;
    printf("Digite o valor do lado 1 do trapezio: ");
    scanf("%f", &lado1trap);
    printf("Digite o valor do lado 2 do trapezio: ");
    scanf("%f", &lado2trap);
    perimetroTrapezio = baseMaior + baseMenor + lado1trap + lado2trap;
    printf("O perimetro do trapezio eh: %.2f\n", perimetroTrapezio);
    break;

    case 'q':
       printf("Quadrado\n");
         float ladoquadrado, areaquadrado;
       printf("Digite o valor do lado do quadrado: ");
      scanf("%f", &ladoquadrado);
         areaquadrado = powf(ladoquadrado,2);
       printf("A area do quadrado eh: %.2f\n", areaquadrado);
       float perimetroQuadrado;
            perimetroQuadrado = 4 * ladoquadrado;
            printf("O perimetro do quadrado eh: %.2f\n", perimetroQuadrado);
            break;

    case 'r':
       printf("Retangulo\n");
         float baseRetangulo, alturaRetangulo, areaRetangulo;
         printf("Digite o valor da base do retangulo: ");
         scanf("%f", &baseRetangulo);
         printf("Digite o valor da altura do retangulo: ");
         scanf("%f", &alturaRetangulo);
         areaRetangulo = baseRetangulo * alturaRetangulo;
         printf("a area do retangulo eh %.2f\n", areaRetangulo);
         float perimetroRetangulo;
         perimetroRetangulo = 2 * (baseRetangulo + alturaRetangulo);
         printf("O perimetro do retangulo eh: %.2f\n", perimetroRetangulo);
         break;

    case 'l':
       printf("Losango\n");
         float diagonalMaior, diagonalMenor, areaLosango;
         printf("Digite o valor da diagonal maior do losango: ");
         scanf("%f", &diagonalMaior);
         printf("Digite o valor da diagonal menor do losango: ");
         scanf("%f", &diagonalMenor);
         areaLosango = (diagonalMaior * diagonalMenor) / 2;
         printf("A area do Losango eh %.2f\n", areaLosango);
         float ladoLosango, perimetroLosango;
         printf("Digite o valor do lado do losango: ");
         scanf("%f", &ladoLosango);
         perimetroLosango = 4 * ladoLosango;
         printf("O perimetro do losango eh: %.2f\n", perimetroLosango);
         break;

    default:
       printf("opcao invalida");
         break;
    }
       

    return 0;
}