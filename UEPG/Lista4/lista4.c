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
    /*
    int valor, valor_final, desconto;
    printf("Insira o valor do produto: \n");
    scanf("%d", &valor);

    valor_final=valor*0.91;
    desconto=valor*0.09;

    printf("O valor apos o desconto eh: %d\nO valor do desconto foi de: %d", valor_final, desconto);
    */
//Exercicio 2:
   /*float salario_liquido, hora_aula, inss;
    int num_aulas;
    printf("Insira quantas aulas foram dadas esse mes: \n");
    scanf("%d", &num_aulas);

    printf("Insira o valor da hora aula: \n");
    scanf("%f", &hora_aula);

    printf("Insira quantos porcentos sera descontado pelo INSS: \n");
    scanf("%f", &inss);

    salario_liquido = (num_aulas*hora_aula)*(1-(inss/100));
    printf("O salario liquido recebido pelo professor sera de: %.2f", salario_liquido);
    */
//Exercicio 3:
    /*float C, F;
    printf("Insira a temperatura em graus centigrados: \n");
    scanf("%f", &C);

    F= (9*C+160)/5;
    printf("A temperatura %.2f em centigrados em Fahrenheit eh igual a: %.2f", C, F);
   */
//Exercicio 4:
    /*float raio, altura, volume, PI=3.14159;
    printf("Insira o valor do raio: \n");
    scanf("%f", &raio);

    printf("Insira o valor da altura: \n");
    scanf("%f", &altura);

    volume= altura*raio*raio*PI;

    printf("O volume eh igual a: %.2f", volume);
    */
//Exercicio 5:
    /*float numerador, denominador, valor_final;
    printf("Insira o valor do numerador: \n");
    scanf("%f", &numerador);

    printf("Insira o valor do denominador: \n");
    scanf("%f", &denominador);

    valor_final=numerador/denominador;

    printf("Resultado: %.3f", valor_final);
    */
//Exercicio 6:
    /*float valor_gasto, gorjeta, valor_final;

    printf("Insira o valor gasto: \n");
    scanf("%f", &valor_gasto);

    gorjeta= valor_gasto*0.1;
    valor_final=gorjeta+valor_gasto;

    printf("O valor da gorjeta foi de: %.2f\nO valor do gasto final foi de: %.2f", gorjeta, valor_final);
    */
//Exercicio 7:
    /*int horas, minutos, horas_em_minutos, minutos_totais;
    printf("Insira as horas: \n");
    scanf("%d", &horas);

    printf("Insira os minutos: \n");
    scanf("%d", &minutos);

    horas_em_minutos=horas*60;
    
    minutos_totais=horas_em_minutos+minutos;

    printf("O total de minutos passados desde o inicio do dia ate o horario %d:%d eh de: %d minutos", horas, minutos, minutos_totais);
    */
//Exercicio 8:
    /*int horas, minutos, horas_em_minutos, minutos_totais, segundos_totais;
    printf("Insira as horas: \n");
    scanf("%d", &horas);

    printf("Insira os minutos: \n");
    scanf("%d", &minutos);

    horas_em_minutos=horas*60;
    
    minutos_totais=horas_em_minutos+minutos;

    segundos_totais=minutos_totais*60;

    printf("O total de segundos passados desde o inicio do dia ate o horario %d:%d eh de: %d segundos", horas, minutos, segundos_totais);
    */
//Exercicio 9:
    /*float deposito, juros, rendimento_mensal, rendimento_anual;
    printf("Insira o valor do deposito: \n");
    scanf("%f", &deposito);

    printf("Insita a taxa de juros: \n");
    scanf("%f", &juros);

    rendimento_mensal = (1+(juros/100))*deposito;
    rendimento_anual = (1+(12*(juros/100)))*deposito;

    printf("O valor o rendimento mensal: %.2f\n", rendimento_mensal);
    printf("O valor o rendimento anual: %.2f\n", rendimento_anual);
    */

//Exercicio 10:
    /*float qntd_sal_min, salario, salario_minimo=1509;
    printf("Insira o salario ganho: \n");
    scanf("%f", &salario);

    qntd_sal_min=(salario/salario_minimo);

    printf("A quantidade de salarios-minimos eh de: %.2f\n", qntd_sal_min);
    */
//Exercicio 11:
    /*float tempo_gasto, velocidade_media, distancia, litros;
        printf("Insira o tempo de viagem(Horas): \n");
        scanf("%f", &tempo_gasto);

        printf("Insira a velocidade media da viagem(Km/H): \n");
        scanf("%f", &velocidade_media);

        distancia = velocidade_media*tempo_gasto;

        litros = distancia/12;

        printf("A distancia percorrida foi igual a: %.2f Km\nO total de litros gasto na viagem foi de: %.2f L", distancia, litros);
        */
//Exercicio 12:
    /*float salario_minimo, qntd_quilowatts, valor_cadaKW, valor_pago, valor_com_desconto;

    printf("Insira o valor do salario minimo: \n");
    scanf("%f", &salario_minimo);

    printf("Quantidade de quilowatts gastos: \n");
    scanf("%f", &qntd_quilowatts);

    valor_cadaKW = (salario_minimo/7)/100;
    valor_pago = ((salario_minimo/7)*qntd_quilowatts)/100;
    valor_com_desconto = valor_pago*0.9;

    printf("O valor pago por cada quilowatt: %.3f reais\n", valor_cadaKW);
    printf("O valor a ser pago: %.2f reais\n", valor_pago);
    printf("O valor a ser pago com um desconto de 10%%: %.2f reais ", valor_com_desconto);
    */

    


}