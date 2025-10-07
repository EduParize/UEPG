#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Autor: Eduardo Parize
RA: 25075923
Lista: Ponteiro 3
*/
//Exercicio 1:
void stringDentro(char s1[50], char s2[50]){
   //Nao consegui
}
//Exercicio 2:
void preencherArray( int valorParaPreencher){
    int array[5], i;
    for(i=0;i<5;i++){
        *(array+i)=valorParaPreencher;
    }
    for(i=0;i<5;i++){
        printf("%d\n", valorParaPreencher);
    }
}
//Exercicio 3:
    void imprimirArray(int array[10]){
        int i;
        for(i=0;i<10;i++){
            printf("%d\n", *(array+i));
        }
    }
//Exercicio 4:
void multiplos(int a){
    int *b, **c,***d;
    b=&a;
    c=&b;
    d=&c;
    printf("dobro: %d\n", (*b)*2);
    printf("triplo: %d\n", (**c)*3);
    printf("quadruplo: %d\n", (***d)*4);
}
int main(){
    multiplos(10);
   
}