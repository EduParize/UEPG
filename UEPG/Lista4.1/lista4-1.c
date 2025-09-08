#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Autor: Eduardo Parize
RA: 25075923
Data:01/04/25
*/
int main() {
//Exercicio 1:
    /*int anos, meses, dias, anos_em_dias, meses_em_dias, dias_totais;
    printf("Insira quantos anos: \n");
    scanf("%d", &anos);
    printf("Insira quantos meses: \n");
    scanf("%d", &meses);
    printf("Insira quantos dias: \n");
    scanf("%d", &dias);

    anos_em_dias=anos*365;
    meses_em_dias=meses*30;

    dias_totais= anos_em_dias+meses_em_dias+dias;

    printf("O total de dias eh de: %d dias", dias_totais);
    */
//Exercicio 2:
    /*int anos, meses, dias,dias_restantes;
    printf("Insira quantos dias de vida: \n");
    scanf("%d", &dias);

    anos = (dias/365);
    meses = (dias%365)/30;
    dias_restantes = (dias%365)%30;

    printf("A idade de %d dias eh igual a\n%d anos\n%d meses\n%d dias", dias,anos, meses, dias_restantes );
    */
//Exercicio 3:
    /*float nota1, nota2, nota3, media;
    printf("Insira o valor da nota 1: \n");
    scanf("%f", &nota1);
    printf("Insira o valor da nota 2: \n");
    scanf("%f", &nota2);
    printf("Insira o valor da nota 3: \n");
    scanf("%f", &nota3);

    media = ((nota1*2)+(nota2*3)+(nota3*5))/10;

    printf("A media do aluno eh de: %.1f", media);
    */
//Exercicio 4:
    /*int horas, minutos, segundos, segundos_totais;
    printf("Insira quantos segundos durou o evento: \n");
    scanf("%d",&segundos_totais);

    horas = segundos_totais/3600;
    minutos = (segundos_totais%3600)/60;
    segundos = (segundos_totais%3600)%60;

    printf("O evento durou:\n%d horas\n%d minutos\n%d segundos", horas, minutos, segundos);
    */
//Exercicio 5:
    /*float custo_consumidor, custo_fabrica, porcentagem_distribuidor, porcentagem_impostos; 
    printf("Insira o custo de fabrica: \n");
    scanf("%f", &custo_fabrica);

    porcentagem_distribuidor=custo_fabrica*0.28;
    porcentagem_impostos = custo_fabrica*0.45;

    custo_consumidor= custo_fabrica+porcentagem_distribuidor+porcentagem_impostos;

    printf("O valor que o consumidor pagara sera de: %.2f reais", custo_consumidor);
    */
//Exercicio 6:
    /*int idade;
    printf("Insira a idade do nadador: \n");
    scanf("%d", &idade);

    if(idade>=5 && idade<=7){
        printf("Categoria infantil A");
            }else if(idade>=8 && idade<=10){
                printf("Categoria infantil B");
                    }else if(idade>=11 && idade<=13){
                        printf("Categoria juvenil A");
                            }else if(idade>=14 && idade<=17){
                                printf("Categoria juvenil B");
                                }else if(idade>=18){
                                    printf("Categoria adulto");
                                        }else{
                                            printf("Nenhuma categoria");
                                        }
    */
//Exercicio 7:
    /*float i,j,k;
    printf("Insira o valor do primeiro numero: \n");
    scanf("%f", &i);
    printf("Insira o valor do segundo numero: \n");
    scanf("%f", &j);
    printf("Insira o valor do terceiro numero: \n");
    scanf("%f", &k);

    if(i>j){
        if(i>k){
            printf("%.2f eh o maior numero", i);
        } else {
                printf("%.2f eh o maior numero", k);}
        }else if(j>k){
            printf("%.2f eh o maior numero", j);
        } else {printf("%.2f eh o maior numero", k);}
        */
//Exercicio 8:
    /*int dinheiro, n100=0, n50=0, n10=0, n5=0, n1=0, i;
    printf("Insira o valor de reais: \n");
    scanf("%d", &dinheiro);

    i = dinheiro;

    while(i!=0){
        if(i>=100){
            n100++;
            i-=100;
            }else if(i>=50){
                n50++;
                i-=50;
                }else if(i>=10){
                    n10++;
                    i-=10;
                    }else if(i>=5){
                        n5++;
                        i-=5;
                        }else{
                            n1++;
                            i--;}
    }
    
    printf("O valor %d reais pode ser entregue em:\n%d notas de 100\n%d notas de 50\n%d notas de 10\n%d notas de 5\n%d notas de 1", dinheiro, n100, n50, n10,n5, n1);
    */  
//Exercicio 9:
    /*int ano=0, altura_chico=150, altura_ze=110;
        while(altura_chico>=altura_ze){
            altura_chico+=2;
            altura_ze+=3;
            ano++;
            }
        printf("Serao necessarios %d anos para Ze alcancar Chico na altura", ano);
    */
//Exercicio 10:
    /*float media=0;
    int numero=0, num_termos=0, soma_termos=0;
        printf("Insira um numero a ser adicionado a media: \n");
        scanf("%d", &numero);

        while(numero>=0){
            soma_termos+=numero;
            num_termos++;
            printf("Insira um numero a ser adicionado a media: \n");
            scanf("%d", &numero);
            
    }

    media = soma_termos/num_termos;
    printf("A media eh: %.2f", media);
    */
//Exercicio 11:
    /*float media=0;
    int numero=1, num_termos=0, soma_termos=0;
              
        while(numero!=0){
            printf("Insira um numero par para ser adicionado a media: \n");
            scanf("%d", &numero);
                if(numero%2==0 && numero !=0){
                    soma_termos+=numero;
                    num_termos++;}
                else{ if(numero%2==1){ 
                     printf("Numero impar!\nInsira um numero par: \n");}
            
        }}
            media = soma_termos/num_termos;
    printf("A media eh: %.2f", media);
    */
//Exercicio 12:
    /*int i;
    float numero, maior_numero, menor_numero;
        printf("Insira um numero: \n");
        scanf("%f", &numero);
        maior_numero=numero;
        menor_numero=numero;

    for(i=1;i<50;i++){
        printf("Insira um numero: \n");
        scanf("%f", &numero);

        if(numero>maior_numero){
            maior_numero=numero;
        } 
        if(numero<menor_numero){
            menor_numero=numero;
        }
        }
        printf("O menor numero foi: %f\nO maior numero foi: %f",menor_numero, maior_numero);
        */
//Exercicio 13:
    
    return 0;
}
