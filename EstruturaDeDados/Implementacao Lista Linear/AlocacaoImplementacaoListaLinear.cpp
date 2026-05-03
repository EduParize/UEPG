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

    atual=lista;
    anterior = NULL;
    while(atual!=NULL && atual->dado<valor){
            anterior=atual;
        atual=atual->prox;
    }
    if(atual != NULL && atual->dado==valor){
        cout<<"O valor "<< valor <<" ja existe na lista"<<endl;
        return;
    }
    struct no *novo = new (struct no);
    novo->dado=valor;
    if(atual==lista){
            novo->prox=atual;
            lista=novo;

    }else{
    anterior->prox=novo;
    novo->prox=atual;
    }
    cout<<"Elemento Inserido"<<endl;
    tamanho++;
}
void removeLista(int posicao){
    int posicaoFlag=0;
    struct no *posterior, *anterior;
    struct no *remover;
    if(tamanho==0){
        cout<<"Lista vazia"<<endl;
        return;
    }
    if(posicao<0 || posicao>=tamanho){
        cout<<"Posicao Invalida"<<endl;
        return;
    }
    posterior=lista;
    if(posicao==0){
        remover=lista;
        lista=lista->prox;
        delete(remover);
        tamanho--;
        cout<<"Elemento Removido"<<endl;
        return;
    }
    while(posicaoFlag<posicao-1){
        posterior=posterior->prox;
        posicaoFlag++;
    }
    remover=posterior->prox;
    anterior=posterior;
    posterior=remover->prox;
    anterior->prox=posterior;
    delete(remover);

    cout<<"Elemento Removido"<<endl;
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
    insereLista(10);
    insereLista(3);
    insereLista(7);
    
    imprime();
}
