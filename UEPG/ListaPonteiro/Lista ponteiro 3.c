#include <stdio.h>
#include <stdlib.h>
/*
Autor: Eduardo Parize
RA: 25075923
Lista: Ponteiro 3
*/
//Exercicio 1
void arrayFloat(float *array[10]){
    int i;
    for(i=0;i<10;i++){
        printf("%x\n", &array[i]);
    }
//Exercicio 2
}
void matrizFloat(float *mat[3][3]){
 int i,j ;
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
        printf("%x\n", &mat[i][j]);
    }}
}
//Exercicio 3:
void dobroArray(){
int i;
int arrayInt[5];
int *endereco=arrayInt;
for(i=0;i<5;i++){
    printf("Insira o valor do %d termo do array: \n", i+1);
    scanf("%d", endereco+i);
}
printf("-----------\n");
for(i=0;i<5;i++){
    printf("%d\n", *(endereco+i)*2);
}
}
//Exercicio 4:
void arrayPares(){
    int i, arrayPares[5];
    int *p = arrayPares;
     for(i=0;i<5;i++){
    printf("Insira o valor do %d termo do array: \n", i+1);
    scanf("%d", &p[i]);
    }
    printf("--------------\n");
    for(i=0;i<5;i++){
    if(p[i]%2==0){
        printf("valor: %d\nendereco: %p\n", p[i], &p[i]);
        printf("--------------\n");
    }
    }
}
int main()
{
    arrayPares();
}
