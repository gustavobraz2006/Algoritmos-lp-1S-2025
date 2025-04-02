#include <stdio.h>
#include <math.h>

int main(int argc, char* argv []){
     float lado;
     printf("Digite o valor do lado do quadrado: ");
     scanf("%f", &lado);

     float ladoQuadrado = powf(lado, 2);
     printf("A area do quadrado eh: %2.f\n", ladoQuadrado);
         
    return 0;

}