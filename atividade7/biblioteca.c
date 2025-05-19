int maior_2n(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int maior_3n(int a, int b, int c) {
    return maior_2n(maior_2n(a, b), c);
}
int menor_2n(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}
int menor_3n(int a, int b, int c) {
    return menor_2n(menor_2n(a, b), c);
}