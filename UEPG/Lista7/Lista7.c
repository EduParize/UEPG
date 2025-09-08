#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*
Autor: Eduardo Parize
RA: 25075923
Lista 7
*/
int main() {
//Exericio 1:
/*  int i=0;
    while(i!=51){
        printf("%d\n", i);
        i++;
    }
*/
//Exercicio 2:
/*
    int i=1;
    while(i!=101){
        printf("%d\n", i);
        i++;
    }
*/
//Exercicio 3:
/*
    int i=100;
    while(i!=0){
        printf("%d\n", i);
        i--;
        }
*/
//Exercicio 4:
/*
    int i=100;
    while(i!=201){
        printf("%d\n", i);
        i++;
        }
*/
//Exercicio 5:
/*
    int i=200;
    while(i!=99){
        printf("%d\n", i);
        i--;
    }
*/
//Exercicio 6:
/*
    int i=5;
    while(i<=500){
        printf("%d\n", i);
        i+=5;
    }
*/
//Exercicio 7:
/*
    int i=2;
    while(i<=100){
        printf("%d\n", i);
        i+=2;
    }
*/
//Exercicio 8:
/*
    int i=1;
    while(i<=100){
        printf("%d\n", i);
        i+=2;
*/
//Exercicio 9:
/*
     int i=1;
    while(i<=20){
        printf("%d\n", i*i);
        i++;
    }
*/
//Exercicio 10:
/*
    int i=1;
    while(i<=100){
        printf("%d\n", i);
        i+=2;
*/
//Exercicio 11:
/*
   int i=0;
   float valor;
   while(i<20){
    printf("Insira o numero %d: \n",i+1);
    scanf("%f", &valor);

    printf("A metade do valor %.2f eh: %.2f\n",valor, valor/2);
    i++;
   }
*/
//Exercicio 12:
/*
    int i=0;
   float valor;
   while(i<20){
    printf("Insira o numero %d: \n",i+1);
    scanf("%f", &valor);

    printf("O quadrado do valor %.2f eh: %.2f\n",valor, valor*valor);
    i++;
   }
*/
//Exercicio 13:
/*
    int i=0;
   float valor;
   while(i<15){
    printf("Insira o numero %d: \n",i+1);
    scanf("%f", &valor);

    printf("A raiz quadrada do valor %.2f eh: %.2f\n",valor, sqrt(valor));
    i++;
    }
*/
//Exercicio 14:
/*
    int i=0;
   float valor;
   while(i<8){
    printf("Insira o numero %d: \n",i+1);
    scanf("%f", &valor);

    printf("O log na base 10 do valor %.2f eh: %.2f\n",valor, log10(valor));
    i++;
    }
*/
//Exercicio 15:
/*
    int i=1, j=0;
    while(i<=100){
        printf("%d\n", i);
        j=j+i;
        i++;
    }
    printf("A soma de todos os valor eh igual a: %d\n", j);
*/
//Exercicio 16:
/*
     int i=1, j=0;
    while(i<=100){
        printf("%d\n", i);
        j=j+i*i;
        i++;
    }
    printf("A soma dos quadrados de todos os valor eh igual a: %d\n", j);
*/
//Exercicio 17:
/*
    int i=1, j=0;
    while(i<=100){
        printf("%d\n", i);
        j=j+i;
        i++;
    }
    printf("A soma da metade de todos os valor eh igual a: %d\n", j/2);
*/
//Exercicio 18:
/*
    int i=1, j=0;
    while(i<=100){
        printf("%d\n", i);
        j=j+i*i*i;
        i++;
    }
    printf("A soma dos cubos de todos os valor eh igual a: %d\n", j);
*/
//Exercicio 19:
/*
    float i=1, j=0;
    while(i<=100){
        printf("%.1f\n", i);
        j=j+i;
        i++;
    }
    printf("A media de todos os valor eh igual a: %.1f\n", j/100);
*/
//Exercicio 20:
/*
    int i=1, numero, maior_num, menor_num;
    printf("Insira o numero 1: \n");
    scanf("%d", &numero);
    maior_num = numero;
    menor_num = numero;

    while(i<10){
        printf("Insira o numero %d: \n", i+1);
        scanf("%d", &numero);

        if(numero>maior_num){
            maior_num = numero;
        }
        if(numero<menor_num){
            menor_num= numero;
        }
        i++;
        }
    printf("O maior numero eh: %d\n", maior_num);
    printf("O menor numero eh: %d\n", menor_num);
    */
//Exercicio 21:
/*
    int i=2, numero, maior_num, seg_maior_num;
    printf("Insira o numero 1: \n");
    scanf("%d", &numero);
    maior_num = numero;

    printf("Insira o numero 2: \n");
    scanf("%d", &numero);
        if(numero>maior_num){
            seg_maior_num=maior_num;
            maior_num = numero;
        }else{
            seg_maior_num = numero;
        }

    while(i<10){
        printf("Insira o numero %d: \n", i+1);
        scanf("%d", &numero);

        if(numero>maior_num){
            seg_maior_num = maior_num;
            maior_num = numero;
            }else if(numero>seg_maior_num){
                    seg_maior_num = numero;
            }
        i++;
        }
       
    printf("O maior numero eh: %d\n", maior_num);
    printf("O segundo maior numero eh: %d\n", seg_maior_num);
*/
//Exercicio 22:
/*
    int i, lim_inferior, lim_superior;
    printf("Insira o limite inferior do intervalo: \n");
    scanf("%d", &lim_inferior);
    printf("Insira o limite superior do intervalo: \n");
    scanf("%d", &lim_superior);
    i = lim_inferior;
    while(i<lim_superior){
        if(i%2==0){
            i+=2;
            if(i<lim_superior){
            printf("%d\n", i);
            }
        }else{
            i++;
            printf("%d\n", i);
        }
    }
    */
//Exercicio 23:
/*
    int i=1, NUM;
    printf("Insira o limite superior: \n");
    scanf("%d", &NUM);

    while(i<=NUM){
        if(i%3 == 0 || i%5 ==0){
            printf("%d\n", i);
        }
    i++;
    }
*/
//Exercicio 24:
/*
    int i=0,numero, par=0, impar=0;
    while(i<200){
        printf("Insira o numero %d: \n", i+1);
        scanf("%d", &numero);
        if(numero%2==0){
            par++;
        }else{
            impar++;
        }
    i++;
    }
    printf("Quantidade de numeros pares: %d\n", par);
    printf("Quantidade de numeros impares: %d\n", impar);
*/
//Exercicio 25:
/*
    int i=0, numero, maior_30=0;
    while(i<15){
        printf("Insira o numero %d: \n", i+1);
        scanf("%d", &numero);
            if(numero>30){
                maior_30++;
            }
        i++;
    }
    printf("A quantidade de numeros maiores que 30 sao: %d\n", maior_30);
*/
//Exercicio 26:
/*
    int i=0,numero, soma=0, total_neg=0;
    while(i<20){
        printf("Insira o numero %d: \n", i+1);
        scanf("%d", &numero);
            if(numero<0){
                total_neg++;
            }else{
                soma=soma+numero;
            }
    i++;
    }
    printf("A soma dos positivos eh: %d\n", soma);
    printf("O total de numero negativos eh: %d\n", total_neg);
*/
    return 0;

}