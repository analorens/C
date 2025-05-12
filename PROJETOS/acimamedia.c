#include <stdio.h>

int main(void){

int C,N; 
int notas[1000];
float media;
int soma=0;
int cont_acima=0; 
float percentual;

scanf("%d", &C); // numeros de caso de teste

for (int i = 0; i <C; i++){
    scanf("%d", &N); // quantos alunos

    soma= 0;
    cont_acima= 0;

   for ( int j = 0; j < N; j++){ // preencher as notas 
        scanf("%d", &notas[j]);
   }
   
    for (int i = 0; i <N; i++){ // para realizar a soma
    soma+= notas[i];
}
    media = (float) soma / N;

    for(int i= 0; i < N; i++){ // para descobrir quantos estao acima da media
        if (notas[i] > media){
            cont_acima++;
        }
    }
 percentual = ((float)cont_acima *100) / N;

    printf("%.3f%%\n", percentual);
}

return 0; 
}