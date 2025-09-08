#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Autor: Eduardo Parize
RA: 25075923
Data:20/03/25
*/

//Exercicio 1:
int main() {
    printf("Inicio do programa\nFim");
    return 0;
}

//Exercicio 2:
int main(){
    int i;
    scanf("%d", &i);
    printf("%d", i);
    return 0;
}

//Exercicio 3:
int main(){
    int i;
    scanf("%d", &i);
    printf("Valor lido: %d", i);
    return 0;
}

//Exercicio 4:
int main(){
    int i;
    scanf("%d", &i);
    printf("%f", i);
    return 0;
}

//Exercicio 5:
int main(){
    float i;
    scanf("%f", &i);
    printf("%d", i);
    return 0;
}
//Exercicio 6:
int main(){
    double i;
    scanf("%lf", &i);
    printf("%e", i);
    return 0;
}

//Exercicio 7:
int main(){
    char a;
    scanf("%c", &a);
    printf("%d", a);
    return 0;
}
//Exercicio 8:
int main(){
    int i, j;
    scanf("%d %d", &i, &j);
    printf("%d %d", j, i);
    return 0;
}

//Exercicio 9:
int main(){
    float i, j;
    scanf("%f %f", &i, &j);
    printf("%f %f", j, i);
    return 0;
}

//Exercicio 10:
int main(){
    int d, m, a;
    scanf("%d %d %d", &d, &m, &a);
    printf("%d/%d/%d",d, m, a);
    return 0;
}

//Exercicio 11:
#define PI 3.14
int main(){
    printf("%f", PI);
    return 0;
}

//Exercicio 12:

int main(){
    const float PI_ = 3.14;
    printf("%f", PI_);
    return 0;
}
//Exercicio 13:
int main(){
    char a;
    scanf("%c", &a);
    printf("\"%c\"", a);
    return 0;
}
//Exercicio 14:
int main(){
    int a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    printf("%c\n%c\n%c", a, b, c);
    return 0;
}
//Exercicio 15:
int main(){
    int i; 
    float j;
    char a;
    scanf("%d %f %c", &i, &j, &a);
    printf("Separado por espacos: %d %f %c\n", i, j, a);
    printf("Tabulacao horizontal: %d \t %f \t %c\n", i, j, a);
    printf("Em cada linha: \n%d \n%f\n%c", i, j, a);
    return 0;
    }

