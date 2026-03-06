#include <iostream>

using namespace std;

const int TAM = 4;
int fila[TAM];
int inicioFila = 0, fimFila =0;
int contador = 0;

bool vazia(){
if (contador == 0){
    return true;
}else {
    return false;
    }
}

void enqueue(int valor){
if(contador==TAM){
    cout<<"Fila cheia"<<endl;
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
if(vazia()){
    cout<<"Fila vazia"<<endl;
}
inicioFila++;
contador--;

}

void inicio(){
if(vazia()){
    cout<<"Fila vazia"<<endl;
}
cout<<"Elemento do inicio da fila: "<< fila[inicioFila]<<endl;
}


void imprime(){
    if(vazia()){
        cout<<"Fila vazia"<<endl;
        return;
    }
    bool flag=true;
    int index=inicioFila;
    while(flag){
        cout<<fila[index]<<endl;
        index++;
        if(index==TAM){
            index=0;
        }
        if(index==fimFila){
            flag=false;
        }
    }
    }
    void dequeueEnd(){
        if(vazia()){
             cout<<"Fila vazia"<<endl;
            return;
        }
        if(fimFila==0){
            fimFila=TAM-1;
        }else{
        fimFila--;
        }
    }
    void enqueueFront(int valor){
        if(contador==TAM){
            cout<<"Fila cheia"<<endl;
            return;
        }
        if(inicioFila==0){
            inicioFila=TAM-1;
        }else{
        inicioFila--;
        }
        fila[inicioFila]=valor;

    }
    void fim(){
        if(vazia()){
             cout<<"Fila vazia"<<endl;
            return;
        }
        if(fimFila==0){
             cout<<"Elemento do fim da fila: "<< fila[TAM-1]<<endl;
        }else{
        cout<<"Elemento do fim da fila: "<< fila[fimFila-1]<<endl;
        }
    }

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    enqueueFront(67);

    inicio();
    fim();
    imprime();
    return 0;
}
