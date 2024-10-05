#include <stdio.h>
#include <string.h>

int main() {
    char string[100], invertida[100];
    int i, j, tam;

    printf("Digite uma string: ");
    gets(string);

    tam = strlen(string);

    for (i = 0, j = tam - 1; i < tam; i++, j--) {
        invertida[i] = string[j];
    }

    invertida[i] = '\0';

    printf("String invertida: %s\n", invertida);

    return 0;
}