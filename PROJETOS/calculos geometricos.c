#include <stdio.h>
#include <math.h>

int main() {
    double num, L, H, diagonal, raio, area_circulo, area_quadrado, coroa, R;
    const double PI = 3.14;

    printf("Digite um numero: ");
    scanf("%lf", &num);

    if (num == 1 || num == 2) {
        printf("Digite o comprimento do retangulo: ");
        scanf("%lf", &L);
        printf("Digite a altura do retangulo: ");
        scanf("%lf", &H);

        // Calcula a diagonal do retângulo
        diagonal = sqrt(L * L + H * H);

        // Raio do círculo circunscrito ao retângulo
        raio = diagonal / 2;

        // Calcula a área do círculo circunscrito
        area_circulo = PI * raio * raio;

        printf("A area do circulo circunscrito e: %.2f\n", area_circulo);
    } 
    else if (num == 3 || num == 4 || num == 5) {
        printf("Insira a medida de um raio: ");
        scanf("%lf", &raio);

        // Calcula o lado do quadrado
        L = raio * sqrt(2);

        // Calcula a área do quadrado
        area_quadrado = L * L;

        printf("A area do quadrado e: %.2f\n", area_quadrado);

        // Achar raio do círculo inscrito no quadrado
        R = L / sqrt(2);

        // Calcular a área da coroa circular
        coroa = PI * (R * R - raio * raio);

        printf("A area da coroa circular formada pelo circulo inscrito e pelo circulo circunscrito ao quadrado: %.2f\n", coroa);
    } 
    else {
        // Se o número for diferente de 1, 2, 3, 4 ou 5
        printf("Digite a medida do lado do quadrado: ");
        scanf("%lf", &L);
    
        // Calcular o raio do círculo circunscrito
        R = L / sqrt(2);
    
        // Calcular o raio do círculo inscrito
        raio = L / 2;
    
        // Calcular a área da coroa circular
        coroa = PI * (R * R - raio * raio);
    
        // Exibir a área da coroa circular
        printf("A area da coroa circular formada pelo circulo inscrito e pelo circulo circunscrito ao quadrado: %.2f\n", coroa);
    }

 return 0;
}    
