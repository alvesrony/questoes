#include <stdio.h>

void mostrar_fibonacci(int limite) {
    int a = 0, b = 1, c;

    printf("Sequencia de Fibonacci ate %d: ", limite);

    if (limite >= 0) {
        printf("%d ", a);
    }
    if (limite >= 1) {
        printf("%d ", b);
    }

    while (b < limite) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");
}

int pertence_fibonacci(int numero) {
    int a = 0, b = 1, c;

    if (numero == a || numero == b) {
        return 1;
    }

    while (b < numero) {
        c = a + b;
        a = b;
        b = c;

        if (b == numero) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int numero;
    int resultado;

    while (1) {
        printf("Informe um numero: ");
        resultado = scanf("%d", &numero);

        while (getchar() != '\n');

        if (resultado == 1) {
            break;
        } else {
            printf("Digite um numero valido.\n");
        }
    }

    if (pertence_fibonacci(numero)) {
        mostrar_fibonacci(numero);
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}

