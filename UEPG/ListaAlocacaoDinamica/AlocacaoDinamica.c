#include <stdio.h>
#include <stdlib.h>
/*
Autor: Eduardo Parize
RA:25075923
Lista: Alocacao dinamica
*/
typedef struct cadastro{
        char nome[30], endereco[50];
        int idade;
    }cadastro;

void exercicio1(){
printf("tamanho char: %d\n", sizeof(char));
printf("tamanho int: %d\n", sizeof(int));
printf("tamanho float: %d\n", sizeof(float));
printf("tamanho double: %d\n", sizeof(double));
}
void exercicio2(){
    typedef struct aluno{
        char nome[50];
        int matricula;
        float nota1, nota2, nota3;
    } aluno;
    printf("tamanho da struct: %d", sizeof(aluno));
}
void exercicio3(n){
    int i;
    cadastro lista = *pegarNumero();
    for(i=0;i<n;i++){
        printf("Insira o nome do cadastro %d:\n", i+1);
        fgets(lista[i].nome,30,stdin);
        fflush(stdin);
        printf("Insira o endereco do cadastro %d:\n", i+1);
        fgets(lista[i].endereco,30,stdin);
        fflush(stdin);
        printf("Insira a idade do cadastro %d:\n",i+1);
        scanf("%d", &lista[i].idade);
    }
    for(i=0;i<n;i++){
        printf("--------------\n");
        printf("Cadastro %d:", i+1);
    }
}
cadastro *pegarNumero(){
 int n;
printf("Insira um numero inteiro positivo:\n");
scanf("%d", &n);
 return (cadastro *) malloc (n*sizeof(cadastro));
}


int main()
{
 exercicio3(n);

}
