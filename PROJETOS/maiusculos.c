#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contar_maiusculas(char str[]) {
    int contador = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            contador++;
        }
    }
    return contador;
}

int main() {
    char linha[100];

    while (1) {
        fgets(linha, sizeof(linha), stdin);
        linha[strcspn(linha, "\n")] = '\0'; // remove o \n do final

        if (strcmp(linha, "FIM") == 0) {
            break;
        }

        printf("%d\n", contar_maiusculas(linha));
    }

    return 0;
}
