#include <stdio.h>

int main(int argc, char* argv[]) {

    printf("Ola, seu assistente virtual ira te ajudar a escolher um filme.\n");
    printf("Escolha um tipo de filme: \n");

    char tipo;
    printf("l - leve\n");
    printf("i - intenso\n");
    scanf(" %c", &tipo);  

    if(tipo == 'l') {
        char generoleve;
        printf("Escolha um gênero de filme: \n");
        printf("c - comedia\n");
        printf("a - animacao\n");
        scanf(" %c", &generoleve);  
        if(generoleve == 'c') {
            printf("O filme escolhido foi: As Branquelas.\n");
        } else if(generoleve == 'a') {
            printf("O filme escolhido foi: Toy Story.\n");
        } else {
            printf("Opcao invalida.\n");
        }

    } else if(tipo == 'i') {
        char generointenso;
        printf("Escolha um genero de filme: \n");
        printf("a - acao\n");
        printf("t - terror\n");
        scanf(" %c", &generointenso);  
        if(generointenso == 'a') {
            char supoureal;
            printf("Escolher entre super-heroi ou aventura realista: \n");
            printf("h - super-heroi\n");
            printf("r - aventura realista\n");
            scanf(" %c", &supoureal);  
            if(supoureal == 'h') {
                printf("O filme escolhido foi: Vingadores: Ultimato.\n");
            } else if(supoureal == 'r') {
                printf("O filme escolhido foi: Mad Max: Estrada da Fúria.\n");
            } else {
                printf("Opcao invalida.\n");
            }
        } else if(generointenso == 't') {
            char tipoterror;
            printf("Escolher entre terror psicologico ou terror sobrenatural: \n");
            printf("p - psicologico\n");
            printf("s - sobrenatural\n");
            scanf(" %c", &tipoterror);  
            if(tipoterror == 'p') {
                printf("O filme escolhido foi: Corra.\n");
            } else if(tipoterror == 's') {
                printf("O filme escolhido foi: Invocacao do Mal.\n");
            } else {
                printf("Opcao invalida.\n");
            }
        } else {
            printf("Opcao invalida.\n");
        }
    } else {
        printf("Opcao invalida.\n");
    }

    printf("Obrigado por usar nosso assistente virtual.\n");

    return 0;
}