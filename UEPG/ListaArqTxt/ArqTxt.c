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
char nomeArq1[50], nomeArq2[50], nomeArq3[50] = "resultado_combinado.txt";
FILE *arq1, *arq2, *arq3;
int ch;
printf("Insira o nome do primeiro arquivo:\n");
fgets(nomeArq1, sizeof(nomeArq1), stdin);
nomeArq1[strcspn(nomeArq1, "\n")] = '\0';

printf("Insira o nome do segundo arquivo:\n");
fgets(nomeArq2, sizeof(nomeArq2), stdin);
nomeArq2[strcspn(nomeArq2, "\n")] = '\0';


arq1 = fopen(nomeArq1, "r");
if(arq1 == NULL){
    printf("Erro na abertura do arquivo %s.\n", nomeArq1);
    exit(1);
    }
arq2 = fopen(nomeArq2, "r");
if(arq2 == NULL){
    printf("Erro na abertura do arquivo %s.\n", nomeArq2);
    fclose(arq1);
    exit(1);
}
arq3 = fopen(nomeArq3, "w");
if(arq3 == NULL){
    printf("Erro na criacao do arquivo %s.\n", nomeArq3);
    fclose(arq1);
    fclose(arq2);
    exit(1);
}
while((ch = fgetc(arq1)) != EOF){
    fputc(ch, arq3);
    }
while((ch = fgetc(arq2)) != EOF){
    fputc(ch, arq3);
    }
    fclose(arq1);
  fclose(arq2);
  fclose(arq3);
}
void Exercicio3(){
char nomeArqOriginal[50],nomeArqConvertido[50];
FILE *arqOriginal, *arqConvertido;
int c;
printf("Insira o nome do arquivo a ser conventido para caracteres maiusculos:\n");
fgets(nomeArqOriginal, sizeof(nomeArqOriginal), stdin);
nomeArqOriginal[strcspn(nomeArqOriginal, "\n")] = '\0';

printf("Insira o nome do arquivo convertido:\n");
fgets(nomeArqConvertido, sizeof(nomeArqConvertido), stdin);
nomeArqConvertido[strcspn(nomeArqConvertido, "\n")] = '\0';

arqOriginal = fopen(nomeArqOriginal, "r");
if((arqOriginal) == NULL){
    printf("Erro na abertura do arquivo %s.\n", nomeArqOriginal);
    exit(1);
    }
arqConvertido = fopen(nomeArqConvertido, "w");
if((arqConvertido) == NULL){
    printf("Erro na criacao do arquivo %s.\n", nomeArqConvertido);
    fclose(arqOriginal);
    exit(1);
    }
  while((c = fgetc(arqOriginal)) != EOF){
        if(c >= 'a' && c <= 'z'){
            c = c - ('a' - 'A');
        }
        fputc(c, arqConvertido);
    }
      fclose(arqOriginal);
  fclose(arqConvertido);

}
void Exercicio4(){
char nomeArq[50], palavra[50];
FILE *arq;
int quantidade = 0;
printf("Insira o nome do arquivo:\n");
fgets(nomeArq, sizeof(nomeArq), stdin);
nomeArq[strcspn(nomeArq, "\n")] = '\0';
printf("Insira a palavra a ser contada:\n");
fgets(palavra, sizeof(palavra), stdin);
palavra[strcspn(palavra, "\n")] = '\0';
arq = fopen(nomeArq, "r");
if((arq) == NULL){
    printf("Erro na abertura do arquivo %s.\n", nomeArq);
    exit(1);
    }
char buffer[100];
while(fgets(buffer, sizeof(buffer), arq) != NULL){
    char *ptr = buffer;
    while((ptr = strstr(ptr, palavra)) != NULL){
        quantidade++;
        ptr += strlen(palavra);
    }
}
printf("A palavra '%s' aparece %d vezes no arquivo '%s'.\n", palavra, quantidade, nomeArq);
fclose(arq);

}
//Faça um programa que leia números positivos e os converta em binário.
//Cada número binário deverá ser salvo em uma linha de um arquivo texto. O
//programa termina quando o usuário digitar um número negativo.
void Exercicio5(){
char nomeArq[50];
FILE *arq;
int numero;
printf("Insira o nome do arquivo para salvar os numeros em binario:\n");
fgets(nomeArq, sizeof(nomeArq), stdin);
nomeArq[strcspn(nomeArq, "\n")] = '\0';
arq = fopen(nomeArq, "w");
if((arq) == NULL){
    printf("Erro na criacao do arquivo %s.\n", nomeArq);
    exit(1);
    }
while(1){
    printf("Insira um numero positivo (ou um numero negativo para sair):\n");
    scanf("%d", &numero);
    if(numero < 0){
        break;
    }
    char binario[32];
    int index = 0;
    if(numero == 0){
        binario[index++] = '0';
    } else {
        while(numero > 0){
            binario[index++] = (numero % 2) + '0';
            numero /= 2;
        }
    }
    for(int i = 0; i < index / 2; i++){
        char temp = binario[i];
        binario[i] = binario[index - i - 1];
        binario[index - i - 1] = temp;
    }
    binario[index] = '\0';
    fprintf(arq, "%s\n", binario);
}
fclose(arq);

}
int main()
{
     Exercicio5();
    return 0;
}
