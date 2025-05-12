#include <stdio.h>
#include <string.h>
#define MAX 1000

int main(void){

char entrada[MAX];

printf("Digite uma palavra ou texto para criptografar: ");
scanf("%[^\n]", entrada);


for(int i = 0; entrada[i] != '\0'; i++){
    char c= entrada[i];

    if(c >= 'a' && c <= 'z'){
        c = ((c - 'a' + 3) % 26) + 'a';
    }
    else if (c >= 'A' && c <= 'Z'){
        c = ((c - 'A' +3) % 26) + 'A';
    }

    entrada[i] = c;
}

printf("%s \n", entrada);

return 0; 
}