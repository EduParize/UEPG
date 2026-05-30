#include <iostream>

using namespace std;

struct no{
    int dado;
    struct no *esq;
    struct no *dir;
};

struct no *raiz= NULL;

void insereArvore(int valor){
    no *novo, *atual, *anterior;
    novo = new (no);
    novo->dado=valor;
    novo->esq=NULL;
    novo->dir=NULL;

    if(raiz==NULL){
        raiz=novo;
        cout<<"Valor inserido na raiz"<<endl;
        return;
    }
    atual=raiz;
    while(atual!=NULL){
        anterior=atual;
        if(valor<atual->dado){
            atual=atual->esq;
        }else{
        atual=atual->dir;
        }
    }
    if(valor<anterior->dado){
        anterior->esq=novo;
    }else{
        anterior->dir=novo;
    }
    cout<<"Valor inserido"<<endl;
}

void insereArvoreSemRepetidos(int valor){
    no *novo, *atual, *anterior;
    novo = new (no);
    novo->dado=valor;
    novo->esq=NULL;
    novo->dir=NULL;

    if(raiz==NULL){
        raiz=novo;
        cout<<"Valor inserido na raiz"<<endl;
        return;
    }
    atual=raiz;
    while(atual!=NULL){
        anterior=atual;
        if(valor<atual->dado){
            atual=atual->esq;
        }else if(valor>atual->dado){
        atual=atual->dir;
        }else{
        cout<<"Valor ja existente na arvore"<<endl;
        return;
        }
    }
    if(valor<anterior->dado){
        anterior->esq=novo;
    }else{
        anterior->dir=novo;
    }
    cout<<"Valor inserido"<<endl;
}

void em_ordem(struct no *atual){
    if(atual!=NULL){
        em_ordem(atual->esq);
        cout<< atual->dado<<" ";
        em_ordem(atual->dir);
    }
}

 void buscaArvore(int valor){
    struct no *atual;
    atual=raiz;
    while(atual!=NULL){
        if(valor==atual->dado){
            cout<<"Mimimei"<<endl;
            return;
        }
        if(valor<atual->dado){
            atual=atual->esq;
        }else{
        atual=atual->dir;
        }

    }
    cout<<"Nao achei"<<endl;
 }

 void imprimeMaior(){
     no *atual, *anterior;
    if(raiz==NULL){
        cout<<"Arvore vazia"<<endl;
        return;
    }
    atual=raiz;
    while(atual!=NULL){
        anterior=atual;
        atual=atual->dir;
    }
    cout<<anterior->dado<<endl;
 }
 void imprimeMenor(){
     no *atual, *anterior;
    if(raiz==NULL){
        cout<<"Arvore vazia"<<endl;
        return;
    }
    atual=raiz;
    while(atual!=NULL){
        anterior=atual;
        atual=atual->esq;
    }
    cout<<anterior->dado<<endl;
 }
int main()
{

    insereArvore(10);
    insereArvore(67);
    insereArvore(7);
    insereArvore(6);
    insereArvore(-11);
    insereArvore(1167);
    //buscaArvore(68);

    /*
    insereArvoreSemRepetidos(10);
    insereArvoreSemRepetidos(67);
    insereArvoreSemRepetidos(10);
    */
    imprimeMaior();
    imprimeMenor();
    //em_ordem(raiz);
}
