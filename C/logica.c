#include <stdio.h>

int eh_par(int n) {
    return n % 2 == 0;
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (eh_par(numero)) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }

    printf("Contando até %d:\n", numero);
    for (int i = 1; i <= numero; i++) {
        printf("%d\n", i);
    }

    return 0;
}
