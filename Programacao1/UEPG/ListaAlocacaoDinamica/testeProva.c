#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int *definirMatriz(int linha, int coluna){
    return (int *) malloc (linha*coluna*sizeof(int));
 }
 void receberMatriz(int *matriz, int linha, int coluna){
    int x, y;
    FILE *arq;

    arq = fopen("matriz.txt", "w");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    for(x=0;x<linha;x++){
        for(y=0;y<coluna;y++){
            printf("Insira o valor do elemento %d %d da matriz:\n", x+1, y+1);
            scanf("%d", &matriz[x*coluna +y]);
            fputc(matriz[x*coluna+y], arq);
        }
        fputc(10, arq);
    }
    fclose(arq);
 }
int main() {
    int *mat = definirMatriz(3, 3);
    if(mat == NULL){
        printf("Erro ao alocar memoria\n");
        return 1;
    }
    receberMatriz(mat, 3, 3);
    free(mat);
    return 0;
}