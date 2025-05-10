#include <stdio.h> 

int main(){

int x,y;

printf("Digite o valor de x: ");
scanf("%d", &x); // ler o valor de x

printf("Digite o valor de y: "); 
scanf("%d", &y); // ler o valor de y

if(x>0 && y>0){ // (+,+)
    printf("Codernadas do primeiro quadrante!");
}

else if (x<0 && y>0) { //(-,+)
    printf("Cordenadas do segundo quadrante!");
} 
if(x<0 && y<0){ // (-,-)
    printf("Cordenadas do terceiro quadrante!");
}
else if (x>0 && y< 0) { //(-,-)
    printf("Cordenadas do quarto quadrante!");
}
    return 0;
}









