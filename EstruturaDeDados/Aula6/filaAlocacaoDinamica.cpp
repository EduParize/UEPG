#include <iostream>

using namespace std;

struct no{
    int dado;
    struct no *prox;
};

 no *inicio = NULL;
 no *fim = NULL; 

 void enqueue(int valor){
    no *novo;
    novo = new(no);
    novo->dado=valor;
    novo->prox=NULL;
    if(inicio == NULL){
        inicio = novo;      
    }else{
    fim->prox=novo;
    }
    fim = novo;
 }

 void dequeue(){
    no *apaga;
    if(inicio == NULL){       
        cout<<"Lista vazia"<<endl;
        return;
    }
    apaga=inicio;
    inicio=inicio->prox;
    delete(apaga);

 if(inicio==NULL){
        fim=NULL;
    }

 }

 void inicioFila(){
    if(inicio==NULL){
        cout<<"Lista vazia"<<endl;
        return;
    }
    cout<<"Valor no inicio da fila: "<<inicio->dado<<endl;
 }
 
 void imprime(){
    no *atual;
    if(inicio == NULL){
        cout<<"Lista vazia"<<endl;
        return;
    }
    atual = inicio;
    while(atual!=NULL){
        cout<<atual->dado<<endl;
        atual = atual->prox;
    }
 }
int main(){
    enqueue(1);
    imprime();
    dequeue();
    imprime();

}