#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
  char frase[30];
  int i,total=0, tamanho;

    scanf("%s", frase);
    
  tamanho = strlen(frase);

  for(i=0; i<tamanho; i++){
    
    if((frase[i] == 'a') || (frase[i] == 'A') || (frase[i] == 'e') || (frase[i] == 'E') || (frase[i] == 'i') || (frase[i] == 'I') || (frase[i] == 'o') || (frase[i] == 'O') ||(frase[i] == 'u') || (frase[i] == 'U')){
     
      total++;      
    }
}
        printf("Vogais: %i", total);

  
  return 0;
}