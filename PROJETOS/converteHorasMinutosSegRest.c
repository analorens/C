#include <stdio.h>

int main(void){

void converteTempo(int segundos, int *horas, int *minutos, int *segRestantes);

int horas,minutos,segRestantes;
int seg;

printf("Digite um valor em segundos: ");
scanf("%d", &seg);

converteTempo(seg, &horas, &minutos, &segRestantes);

printf("%d equivale a %d: %d: %d. ", seg, horas,minutos, segRestantes);

return 0;
}

void converteTempo(int segundos, int *horas, int *minutos, int *segRestantes){

*horas= segundos / 3600;
*minutos= (segundos % 3600) /60;
*segRestantes= segundos % 60;

}