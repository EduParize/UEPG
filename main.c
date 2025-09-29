#include <stdio.h>
#include <stdlib.h>
void arrayFloat(float *array[10]){
    int i;
    for(i=0;i<10;i++){
        printf("%x\n", &array[i]);
    }

}
void matrizFloat(float *mat[3][3]){
 int i,j ;
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
        printf("%x\n", &mat[i][j]);
    }}
}
void dobroArray(){
int i;
int *arrayInt[5];
for(i=0;i<5;i++){
        int endereco = &arrayInt[0];
    printf("Insira o valor do %d termo do array: \n", i+1);
    scanf("%d", &endereco+8*i);
}
for(i=0;i<5;i++){
    printf("%d\n", *arrayInt[i]);
}
}
int main()
{
    //float array[10]={1,2,3,4,5,6,7,8,9,10};
   //arrayFloat(array);
   // float mat[3][3]={{1, 2, 3},
   //                  {4, 5, 6},
   //                  {7, 8, 9}};
   // matrizFloat(mat);
    //int array[5]=[];
    dobroArray();
}
