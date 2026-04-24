#include <iostream>

using namespace std;
struct no{
int dado;
struct no *prox;
};

no *lista=NULL;
int tamanho=0;

void insereLista(int valor){
    struct no *atual, *anterior;
    struct no *novo;

    novo = new (struct no);
    novo->dado=valor;
    atual=lista;
    while(atual!=NULL && atual->dado<valor){
            anterior=atual;
        atual=atual->prox;
    }
    if(atual==lista){
            novo->prox=atual;
            lista=novo;

    }else{
    anterior->prox=novo;
    novo->prox=atual;
    }
    tamanho++;
}
void removeLista(int valor){
    struct no *posterior, *anterior;
    struct no *remover;
    if(tamanho==0){
        cout<<"Lista vazia"<<endl;
        return;
    }
    posterior=lista;
    while(posterior!=NULL && posterior->dado<valor){
            anterior=posterior;
        posterior=posterior->prox;
    }
    if(posterior==NULL){
        cout<<"O valor "<<valor<<" nao esta na lista"<<endl;
        return;
    }
    if(posterior==lista){
        remover=lista;
        lista=lista->prox;
    }else{
    remover=posterior;
    posterior=posterior->prox;
    anterior->prox=posterior;
    delete(remover);
    }
    tamanho--;
}
void recuperaLista(int posicao){
    no *atual;
     if(tamanho==0){
        cout<<"Lista vazia"<<endl;
        return;
    }
     if(posicao>=tamanho || posicao<0){
        cout<<"Posicao Invalida"<<endl;
        return;
    }
    atual=lista;
    for(int i=0;i<posicao;i++){
        atual=atual->prox;
    }

    cout<<"O valor da posicao "<< posicao << " eh igual a: "<<atual->dado<<endl;
}

void buscaLista(int valor){
    no *atual;
    int posicao=0;
    if(tamanho==0){
        cout<<"Lista vazia"<<endl;
        return;
    }
    atual=lista;
    for(int i=0;i<tamanho;i++){

        if(atual->dado==valor){
            break;
        }
        posicao++;
        atual=atual->prox;
    }
    if(posicao==tamanho){
        cout<<"O valor "<<valor<<" nao esta na lista"<<endl;
        return;
    }
    cout<<"O valor "<<valor<<" esta na posicao "<<posicao<<" da lista"<<endl;

}
void imprime(){
    no *atual;
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
    insereLista(5);
    insereLista(10);
    insereLista(3);
    insereLista(7);
    buscaLista(101);
    //recuperaLista(-4);
    //imprime();
}
