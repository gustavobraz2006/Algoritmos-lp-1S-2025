#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main(int argc, char* argv[]){

    int numero; 
    int i;
    int primo = 1;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 2) {
        primo = 0;
        printf("%d nao eh primo\n", numero);
    }
    else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                primo = 0;
                printf("%d nao eh primo\n", numero);
                break;
            }
            
        } 
        if (primo) {
            printf("%d eh primo\n", numero);
        }
    }
    
    
    
    return 0;
}    
