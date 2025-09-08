#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Autor: Eduardo Parize
RA: 25975923
Lista: Structs
*/

int main(){
//Exercicio 1:
/*
    typedef struct pessoa{
char nome[40];
int idade;
char endereco[50];
}pessoa;

pessoa j;
    printf("Insira o nome do jogado: ");
    fgets(j.nome,40,stdin);
      fflush(stdin);
    printf("Insira a idade do jogado: ");
    scanf("%d", &j.idade);
    printf("Insira o endereco do jogado: ");
    fflush(stdin);
    fgets(j.endereco,50,stdin);

    printf("%s \n%d \n%s",j.nome, j.idade, j.endereco);
*/
//Exercicio 2:
/*
    typedef struct coordenadas{
    float x;
    float y;
    }coordenadas;
    coordenadas ponto;

    float distancia;
    printf("Insira o valor da coordenadas X do ponto: \n");
    scanf("%f", &ponto.x);
     printf("Insira o valor da coordenadas Y do ponto: \n");
    scanf("%f", &ponto.y);

    distancia = sqrt(ponto.x*ponto.x+ponto.y*ponto.y);
    printf("A distancia eh: %.2f u.d", distancia);
    */
//Exercicio 3:
/*
    typedef struct coordenadas{
    float x;
    float y;
    }coordenadas;
    coordenadas ponto1, ponto2;
    float distancia;

    printf("Insira o valor da coordenadas X do ponto 1: \n");
    scanf("%f", &ponto1.x);
     printf("Insira o valor da coordenadas Y do ponto 1: \n");
    scanf("%f", &ponto1.y);

    printf("Insira o valor da coordenadas X do ponto 2: \n");
    scanf("%f", &ponto2.x);
     printf("Insira o valor da coordenadas Y do ponto 2: \n");
    scanf("%f", &ponto2.y);

    distancia = sqrt(pow(ponto1.x-ponto2.x, 2)+pow(ponto1.y-ponto2.y, 2));

    printf("%.2f", distancia);
*/
//Exercicio 4:
/*
     typedef struct ponto{
    float x;
    float y;
    }ponto;

  typedef struct retangulo{
    ponto superior;
    ponto inferior;
    }retangulo;
    float diagonal, perimetro, area;
    retangulo r;

    printf("Insira o valor da coordenadas X do ponto superior esquerdo: \n");
    scanf("%f", &r.superior.x);
     printf("Insira o valor da coordenadas Y do ponto superior esquerdo: \n");
    scanf("%f", &r.superior.y);

    printf("Insira o valor da coordenadas X do ponto inferior direito: \n");
    scanf("%f", &r.inferior.x);
     printf("Insira o valor da coordenadas Y do ponto inferior direito: \n");
    scanf("%f", &r.inferior.y);

    perimetro=(((r.inferior.x)-(r.superior.x))+((r.superior.y)-(r.inferior.y)))*2;
    area=((r.inferior.x)-(r.superior.x))*((r.superior.y)-(r.inferior.y));
    diagonal=sqrt(pow((r.inferior.x)-(r.superior.x),2)+(pow((r.inferior.y)-(r.superior.y),2)));

    printf("Perimetro: %.2f\nArea: %.2f\nDiagonal: %.2f",perimetro, area, diagonal);
    */
//Exercicio 5:
/*
  typedef struct ponto{
    float x;
    float y;
    }ponto;

  typedef struct retangulo{
    ponto superior;
    ponto inferior;
    }retangulo;
    float diagonal, perimetro, area;

    retangulo r;
    ponto p;

    printf("Insira o valor da coordenadas X do ponto superior esquerdo: \n");
    scanf("%f", &r.superior.x);
     printf("Insira o valor da coordenadas Y do ponto superior esquerdo: \n");
    scanf("%f", &r.superior.y);

    printf("Insira o valor da coordenadas X do ponto inferior direito: \n");
    scanf("%f", &r.inferior.x);
     printf("Insira o valor da coordenadas Y do ponto inferior direito: \n");
    scanf("%f", &r.inferior.y);

    printf("Insira o valor da coordenadas X do ponto : \n");
    scanf("%f", &p.x);
     printf("Insira o valor da coordenadas Y do ponto : \n");
    scanf("%f", &p.y);

    if(p.x<=r.inferior.x && p.x>=r.superior.x &&p.y<=r.superior.y&&p.y>=r.inferior.y){
        printf("O ponto esta dentro do retangulo");
    }else{
    printf("O ponto NAO esta dentro do retangulo");
    }
*/
//Exercicio 6:
/*
typedef struct aluno{
char nome[40];
float nota[3];
int matricula;
float media;
}aluno;
aluno aluno1, aluno2, aluno3;

printf("Insira o nome do aluno 1: ");
    fgets(aluno1.nome,40,stdin);
      fflush(stdin);
    printf("Insira a nota da primeira prova do aluno 1: \n");
    scanf("%f", &aluno1.nota[0]);
    printf("Insira a nota da segunda prova do aluno 1: \n");
    scanf("%f", &aluno1.nota[1]);
    printf("Insira a nota da terceira prova do aluno 1: \n");
    scanf("%f", &aluno1.nota[2]);
    printf("Insira a matricula do aluno 1: ");
    scanf("%d", &aluno1.matricula);
fflush(stdin);

printf("Insira o nome do aluno 2: ");
    fgets(aluno2.nome,40,stdin);
      fflush(stdin);
    printf("Insira a nota da primeira prova do aluno 2: \n");
    scanf("%f", &aluno2.nota[0]);
    printf("Insira a nota da segunda prova do aluno 2: \n");
    scanf("%f", &aluno2.nota[1]);
    printf("Insira a nota da terceira prova do aluno 2: \n");
    scanf("%f", &aluno2.nota[2]);
    printf("Insira a matricula do aluno 2: ");
    scanf("%d", &aluno2.matricula);
    fflush(stdin);

    printf("Insira o nome do aluno 3: ");
    fgets(aluno3.nome,40,stdin);
      fflush(stdin);
    printf("Insira a nota da primeira prova do aluno 3: \n");
    scanf("%f", &aluno3.nota[0]);
    printf("Insira a nota da segunda prova do aluno 3: \n");
    scanf("%f", &aluno3.nota[1]);
    printf("Insira a nota da terceira prova do aluno 3: \n");
    scanf("%f", &aluno3.nota[2]);
    printf("Insira a matricula do aluno 3: ");
    scanf("%d", &aluno3.matricula);
fflush(stdin);

aluno1.media=(aluno1.nota[0]+aluno1.nota[1]+aluno1.nota[2])/3;
aluno2.media=(aluno2.nota[0]+aluno2.nota[1]+aluno2.nota[2])/3;
aluno3.media=(aluno3.nota[0]+aluno3.nota[1]+aluno3.nota[2])/3;

if(aluno1.media>aluno2.media&&aluno1.media>aluno3.media){
  printf("A maior media eh do '%s'\nMedia: %.2f",aluno1.nome, aluno1.media);
}else if(aluno2.media>aluno1.media && aluno2.media>aluno3.media){
  printf("A maior media eh do '%s'\nMedia: %.2f",aluno2.nome, aluno2.media);
} else{
  printf("A maior media eh do '%s'\nMedia: %.2f",aluno3.nome, aluno3.media);
}
*/
//Exercicio 7:
/*
typedef struct hora
{
  int horas;
  int minutos;
  int segundos;
  int total;
}hora;

int indice_maior=0;
hora horarios[5];
for(int i=0;i<5;i++){
printf("Insira a hora do horario %d:", i+1);
scanf("%d", &horarios[i].horas);
printf("Insira os minutos do horario %d:", i+1);
scanf("%d", &horarios[i].minutos);
printf("Insira os segundos do horario %d:", i+1);
scanf("%d", &horarios[i].segundos);
}
for(int i=0;i<5;i++){
horarios[i].total=horarios[i].horas*3600+horarios[i].minutos*60+horarios[i].segundos;
}

for(int i=0;i<5;i++){
if (horarios[i].total > horarios[indice_maior].total) {
            indice_maior = i;
        }
}

printf("O maior horario informado eh: %d:%d:%d\n",horarios[indice_maior].horas, horarios[indice_maior].minutos, horarios[indice_maior].segundos);
*/
}
