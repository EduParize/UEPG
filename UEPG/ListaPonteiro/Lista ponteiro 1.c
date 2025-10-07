#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Exercicio 1:
void maiorEndereco(int i, int j){
    int *x=&i, *y=&j;
    printf("X: %x\n", x);
    printf("Y: %x\n", y);
    if(x>y){
        printf("O endereco de X eh maior q Y");

    }else{
    printf("O endereco de Y eh maior que X");}
}
//Exercicio 2:
void swap(int *a, int*b){
    printf("A antes: %x\n", &a);
    printf("B antes: %x\n", &b);
    a=&b;
    b=&a;
    printf("A depois: %x\n", a);
    printf("B depois: %x\n", b);
}
//Exercicio 3:
void reverse(char *s){
    if(s== NULL || *s == '\0'){
        return;
    }
    char *inicio = s;
    char *fim = s + strlen(s)-1;
    char temp;

    while(inicio<fim){
        temp = *inicio;
        *inicio = *fim;
        *fim = tempo;

        inicio++/
        fim--;
    }
}
//Exercicio 4:
void exercicio4(int A, int B){
     printf("A antes: %d\n", A);
    printf("B antes: %d\n", B);
A=A+B;
 printf("A depois: %d\n", A);
  printf("B depois: %d\n", B);
}
void calc_esfera(float R, float *area, float *volume){
    *area = 4*3.14*(R*R);
    *volume = (4.0/3.0)*3.14*(R*R*R);
}
int main()
{ //  char string[200];
  //  printf("Insira a string para inverter\n");
  //  fgets(string, 200, stdin);

  // reverse(string);
  exercicio4(10, 5);
}
