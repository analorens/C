#include <stdio.h> 

int main (){

int A, B, soma, subtr, mult, divis; 

printf("Digite o primeiro valor: \n"); 
scanf("%d", &A); 
printf("Digite o segundo valor: \n"); 
scanf("%d", &B); 

soma= A+B; // Só estão sendo armazenados em memória, não estão aparecendo para o úsuario// 
subtr= A-B;
mult= A*B; 
divis= A/ B; 

printf("Resultados: \n "); 
printf("Soma: %d. \n", soma);
printf("Subtra: %d. \n", subtr); 
printf("Multiplic: %d.\n", mult);
printf("Div: %d \n", divis); 



}