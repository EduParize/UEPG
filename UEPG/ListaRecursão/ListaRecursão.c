#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//Exercicio 1:
int somatorio(int n)
{
    if(n==1){
        return 1;
        }
    return n + somatorio(n-1);
}
//Exercicio 2:
int crescente(int n, int i){

    if(i>n){
        return n;
        }
        printf("%d\n", i);
        return crescente(n, i+1);
}
//Exercicio 3:
int decrescente(int n){
    if(n==1){
     return 1;
     }
        printf("%d\n", n);
    return decrescente(n-1);
}
//Exercicio 6:
int multi(int x, int y){
    if(x==y){
        return y;
    }
    return x*multi(x+1, y);
}

//Exercicio 7:
int somaSucessiva(int x, int y, int i){
if(i==y){
    return x;
}
return x+somaSucessiva(x, y, i+1);
}
//Exercicio 8:
int fatorial(int n){
    if(n==1){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}
//Exercicio 9:
 int fibonacci(int n){
    if(n==0){
        
        return 0;
    }else if(n==1){
       
        return 1;
    }else{
        
        return fibonacci(n-1)+ fibonacci(n-2);
    }
 }
//Exercicio 10:
int inverteNumero(int n){
    if(n<10){
        return n;
    }
    int ultimoDigito = n%10;
    int restoDigitos = n/10;
    int numDigitoResto = (int)log10(restoDigitos)+1;
    int potencia10 = (int)pow(10, numDigitoResto);
    return (ultimoDigito*potencia10)+inverteNumero(restoDigitos);
}
//Exercicio 11:
    void decimal_binario(int n){
        if(n/2>0){
            decimal_binario(n/2);
        }
        printf("%d", n%2);
    }
//Exercicio 12:
float serie_s(float n){
    if(n<=0){
        return 0.0;
    }
    if(n==1){
        return 2;
    } else{
        return ((1+(n*n))/n)+serie_s(n-1);
    }

}
int main()
{
   printf("%.2f",serie_s(-3) );

}

