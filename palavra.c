#include<stdio.h>

int main(){
    char p[100];
    FILE *palavra_op;

    palavra_op = fopen("palavramana.txt", "w");

    printf("Escreva uma palavra: ");
    scanf(" %s", p);
    fprintf(palavra_op, "%s", p);

    fclose(palavra_op);

    printf("Dados gravados com sucesso");
    return 0;
}
