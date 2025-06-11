
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

#define MAX 255

// Variável Global
int y = 1;

void incrementaX(int *x){
    // Variável Local
    while(*x < 5){
        y++;
        *x = 11;
    }
}

int main(int argc, char* argv[]){

    int z = 1;
    int w = 2;
    incrementaX (&z);

    printf("z = %d\n", z);
    printf("y = %d\n", y);

    printf("w = %p\n", &w);
    printf("z = %p\n", &z);






    return 0;
}    