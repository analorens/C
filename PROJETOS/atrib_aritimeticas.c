#include <stdio.h> 

int main(){

    int dado = 10; 
    printf("Dado antes do incremento: %d \n", dado);

    dado++; 
    printf("Dado depois do incremento: %d \n", dado);

    dado--;
    printf("Dado depois do decremento: %d \n", dado);

    dado+= 3; // incremento genérico//
    printf("Dado depois do incremento 3unidades : %d \n", dado);

    dado-= 2; 
    printf("Dado depois do decremento 2unidades: %d \n", dado); 

    dado*= 10; 
    printf("Dado depois de multiplicar por 10: %d \n", dado);

    dado/= 2; 
    printf("Dado depois de dividir por 2: %d \n", dado); 


}