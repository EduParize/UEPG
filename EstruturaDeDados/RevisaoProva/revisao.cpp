#include <iostream>

using namespace std;

const int TAM = 4;
int fila[TAM];
int inicioFila = 0, fimFila =0;
int contador = 0;

void enqueue(int valor){
    if(contador==TAM){
        cout<<"Fila Cheia"<<endl;
        return;
    }
    fila[fimFila]=valor;
    fimFila++;
    if(fimFila==TAM){
        fimFila=0;
    }
    contador++;
}

void dequeue(){
    if(contador==0){
        cout<<"Fila vazia"<<endl;
        return;
    }
    inicioFila++;
    contador--;
}

void imprime(){
    if(contador==0){
        cout<<"Fila vazia"<<endl;
        return;
    }
    for(int i=inicioFila;i<fimFila;i++){
        cout<<fila[i]<<endl;
    }
}
int main() {
    enqueue(1);
    enqueue(2);
    enqueue(10);
    enqueue(67);
    dequeue();
   // enqueue(1000);
    imprime();
    return 0;
}