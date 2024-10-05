#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c = 0, i;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (c <= n) {
        if (c == n) {
            printf("O numero %d pertence a sequencia de Fibonacci\n", n);
            return 0;
        }
        c = a + b;
        a = b;
        b = c;

        if (c > n) {
            printf("O numero %d nao pertence a sequencia de Fibonacci\n", n);
            return 0;
        }
    }
    return 0;
}