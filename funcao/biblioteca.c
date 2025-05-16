

    int maior_2n(int a, int b){
        int maior;
        if (a > b){
            maior = a;
        } else {
            maior = b;
        }

        return maior;
    }

    /*
    RETORNA O MAIOR ENTRE 3 NUMEROS INTEIROS.
    */

   int maior_3n(int a, int b, int c){
    return maior_2n(maior_2n(a , b) , c);   
   }

   

   