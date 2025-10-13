#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Autor: Eduardo Parize
RA:25075923
Lista: Alocacao dinamica
*/
typedef struct cadastro{
        char nome[30], endereco[50];
        int idade;
    }cadastro;
//Exercicio 1:
void exercicio1(){
printf("tamanho char: %d\n", sizeof(char));
printf("tamanho int: %d\n", sizeof(int));
printf("tamanho float: %d\n", sizeof(float));
printf("tamanho double: %d\n", sizeof(double));
}
//Exercicio 2:
void exercicio2(){
    typedef struct aluno{
        char nome[50];
        int matricula;
        float nota1, nota2, nota3;
    } aluno;
    printf("tamanho da struct: %d", sizeof(aluno));
}
//Exercicio 3:
int pegarNumero(){
 int n=0;
 while(n<=0){
printf("Insira um numero inteiro positivo:\n");
scanf("%d", &n);
fflush(stdin);
if(n<=0){
    printf("Valor incorreto, insira novamente: (inteiro positivo):\n");
}
}
 return n;
}
cadastro *alocarStruct(int n){
    return (cadastro *) malloc (n*sizeof(cadastro));
}
cadastro *lerStruct(cadastro *array,int n){
     for(int i=0;i<n;i++){
        printf("Insira o nome do cadastro %d:\n", i+1);
        fgets(array[i].nome,30,stdin);
        array[i].nome[strcspn(array[i].nome, "\n")] = '\0';
        fflush(stdin);
        printf("Insira o endereco do cadastro %d:\n", i+1);
        fgets(array[i].endereco,50,stdin);
         array[i].endereco[strcspn(array[i].endereco, "\n")] = '\0';
        fflush(stdin);
        printf("Insira a idade do cadastro %d:\n",i+1);
        scanf("%d", &array[i].idade);
        fflush(stdin);
    }
    return array;
}
void imprimirStruct(cadastro *array, int n){
for(int i=0;i<n;i++){   
        printf("--------------\n");
        printf("Cadastro %d:\n", i+1);
        printf("Nome: %s\n", array[i].nome);
        printf("Idade: %d\n", array[i].idade);
        printf("Endereco: %s\n", array[i].endereco);
    }
}
void exercicio3(){
    int n=0;
    cadastro *array;

n=pegarNumero();
array = alocarStruct(n);
lerStruct(array, n);
imprimirStruct(array, n);
}

//Exercicio 4:
int *alocaVetor(int tam){
        return (int *)malloc(tam*sizeof(int));
    }
int *lerVetor(int *vet,int tam){
   
    for(int i=0;i<tam;i++){
         printf("Insira o valor %d do array:\n", i+1);
    scanf("%d", &vet[i]);
    }
    return vet;
}
void imprimirVetor(int *vet, int tam){
    for(int i=0;i<tam;i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}
void exercicio4(){
    int tam=0, *vet;
    printf("Insira o valor que deseja que o vetor tenha: \n");
    scanf("%d", &tam);
    vet=alocaVetor(tam);
    lerVetor(vet, tam);
    imprimirVetor(vet, tam);
    free(vet);
}
//Exercicio 5:
int *alocarVetor_5(int tamanho){
    return (int*) malloc(tamanho*sizeof(int));
}
int *lerVetor_5(int *V,int tamanho){
    for(int i=0;i<tamanho;i++){
        printf("Insira o valor %d do array: (valor maior ou igual a 2)\n", i+1);
        scanf("%d",&V[i]);
        if(V[i]<2){
            printf("Valor incorreto, insira um valor maior do que 2!\n");
            printf("------------------------\n");
            i--;
        }
    }
    return V;
}
void imprimirVetor_5(int *V, int tam){
    for(int i=0;i<tam;i++){
        printf("%d ", V[i]);
    }
    printf("\n");
}
void exercicio5(){
    int tam=0,*V;
    while(tam<=0){
    printf("Insira o valor que deseja que o vetor tenha: \n");
    scanf("%d", &tam);
    if(tam<=0){
        printf("Insira um valor positivo!\n");
    }
    }
    V = alocarVetor_5(tam);
    lerVetor_5(V, tam);
    imprimirVetor_5(V, tam);
}


int main()
{
 exercicio3();

}
