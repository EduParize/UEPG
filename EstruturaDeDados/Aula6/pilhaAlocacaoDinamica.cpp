#include <iostream>

using namespace std;

struct no{
    int dado;
    struct no *prox;
};

struct no *pilha = NULL;

void push(int valor){
    no *novo;
    novo = new (no);
    novo -> dado=valor;
    novo -> prox=pilha;
    pilha = novo;
}

void pop(){
    struct no *apaga;
    if(pilha==NULL){
        cout<<"Pilha vazia"<<endl;
        return;
    }
    apaga = pilha;
    pilha = pilha->prox;
    delete (apaga);
}

void imprime(){
    if(pilha==NULL){
        cout<<"Pilha vazia"<<endl;
        return;
    }
    while(pilha!=NULL){
        cout<<pilha->dado<<endl;
        pilha=pilha->prox;
    }
}

void topo(){
    if(pilha==NULL){
        cout<<"Pilha vazia"<<endl;
        return;
    }
    cout<<"Valor do topo: "<<pilha->dado<<endl;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    topo();
    push(5);
    push(6);
    push(7);
    pop();
    push(8);
    imprime();
}
