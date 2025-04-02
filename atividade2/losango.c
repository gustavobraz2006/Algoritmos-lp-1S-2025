#include <stdio.h>
#include <math.h>

int main (int argc, char* argv []){
    float diagonalMaior, diagonalMenor;
    printf("Digite o valor da diagonal maior do losango: ");
    scanf("%f", &diagonalMaior);
    printf("Digite o valor da diagonal menor do losango: ");
    scanf("%f", &diagonalMenor);
    
    float areaLosango = (diagonalMaior * diagonalMenor) / 2;
    printf("A area do losango eh: %.2f\n", areaLosango);


    return 0;
}