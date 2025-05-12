#include <stdio.h> 

int main(void){

int cartas[5]; 
int crescente = 0;
int decrescente = 0; 


for (int i = 0; i < 5; i++){
    scanf("%d", &cartas[i]);
}

for (int i= 1; i < 5; i++){
        if(cartas[i] > cartas [i - 1]){
        crescente++;
        }
        if(cartas[i] < cartas[i -1]){
            decrescente++;
        }
    }
if(crescente == 4){
    printf("C");
}
else if(decrescente == 4){
    printf("D");
}
else{
    printf("N");
}
return 0;
}