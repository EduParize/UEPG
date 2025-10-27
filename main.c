#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Exercicio1(){
    char c;
    int i;
FILE *arq;
char nome[50];
int linhas=0;
printf("Insira o nome do arquivo:\n");
fgets(nome, sizeof(nome), stdin);
nome[strcspn(nome, "\n")]='\0';
fflush(stdin);
arq = fopen(nome, "r+");

if(arq == NULL){
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
}
while(!feof(arq)){
        c=fgetc(arq);
      if(c==10){
        linhas++;
      }
      }
printf("\nA quantidade de linhas no arquivo '%s' eh igual a: %d",nome, linhas);
fclose(arq);

}
void Exercicio2(){
}
int main()
{
     Exercicio1();
    return 0;
}
