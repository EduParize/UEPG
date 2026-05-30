#include <iostream>

using namespace std;

struct no{
    int dado;
    no *prox;
};

struct no *lista=NULL;
int tamanho = 0;

void insereLista(int valor, int posicao){
    struct no *atual, *novo;
    if(posicao<0 || posicao>tamanho){
        cout<<"Posicao invalida!"<<endl;
        return;
    }
    novo = new (struct no);
    novo->dado=valor;
    if( posicao == 0){
            novo->prox=lista;
            lista = novo;
    }else{
        atual = lista;
        for(int i=0;i<posicao-1;i++){
            atual=atual->prox;
        }

        novo->prox=atual->prox;
        atual->prox=novo;
    }
    tamanho++;
    }

void removePosicao(int posicao){
    struct no *apaga, *atual;
    if(posicao<0 || posicao>=tamanho){
        cout<<"Posicao invalida!"<<endl;
        return;
    }

    if( posicao == 0){
            apaga=lista;
            lista=lista->prox;
    }else{
        atual=lista;
        for(int i=0;i<posicao-1;i++){
            atual=atual->prox;
        }
        apaga=atual->prox;
        atual->prox=apaga->prox;
}
    tamanho--;
    delete(apaga);
}

void recuperaLista(int posicao){
    struct no *atual;
    if(tamanho==0){
        cout<<"Lista vazia"<<endl;
        return;
    }
    if(posicao<0 || posicao>=tamanho){
        cout<<"Posicao invalida!"<<endl;
        return;
    }
    atual=lista;
    for(int i=0;i<posicao;i++){
            atual=atual->prox;
        }
    cout<<atual->dado<<endl;
}

void buscaLista(int valor){
    struct no *atual;
    if(tamanho==0){
        cout<<"Lista vazia"<<endl;
        return;
    }
    atual=lista;
    for(int i=0;i<tamanho;i++){
        if(atual->dado == valor){
            cout<<"O valor "<<valor<<" esta na posicao "<<i<<endl;
            return;
        }
        atual=atual->prox;
        }

    cout<<"O valor "<<valor<<" nao esta na lista"<<endl;

}

void imprime(){
    struct no *atual;
    if(tamanho==0){
        cout<<"Lista vazia"<<endl;
        return;
    }
    atual=lista;
    while(atual!=NULL){
    cout<<atual->dado<<endl;
    atual=atual->prox;
    }
}


int main()
{
    insereLista(10, 0);
    insereLista(20, 1);
    insereLista(30, 2);
    removePosicao(1);
    //recuperaLista(1);
    buscaLista(30);
    //imprime();
}
