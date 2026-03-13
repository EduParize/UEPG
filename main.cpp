#include <iostream>

using namespace std;
const int TAM = 6;
int lista[TAM];
int tamanho = 0;

void insereLista(int valor, int posicao){
    if(tamanho == TAM){
        cout<<"Lista cheia"<<endl;
        return;
    }
    if(posicao<0||posicao>tamanho){
        cout<<"Posicao invalida"<<endl;
        return;
    }
    for(int i=tamanho;i>=posicao;i--){
        lista[i]=lista[i-1];
    }
    lista[posicao]=valor;
    tamanho++;
}

void removeLista(int posicao){
    if(tamanho ==0){
        cout<<"Lista vazia"<<endl;
        return;
    }
    if(posicao>=TAM||posicao<0){
        cout<<"Posicao invalida"<<endl;
        return;
    }
    for(int i=posicao;i<tamanho;i++){
        lista[i]=lista[i+1];
    }
    tamanho--;
}

void recuperaLista(int posicao){
    if(posicao>tamanho){
        cout<<"Posicao invalida"<<endl;
        return;
    }
    cout<<"valor da posicao "<< posicao<< ":" <<lista[posicao]<<endl;
}

void buscaLista(int valor){
    for(int i=0;i<tamanho;i++){
        if(lista[i]==valor){
            cout<<"Posicao do valor "<< valor <<":"<< i<<endl;
            return;
        }
    }
    cout<<"Valor nao encontrado"<<endl;

}

void imprime(){
if(tamanho==0){
    cout<<"Lista vazia"<<endl;
    return;
}
for(int i=0;i<tamanho;i++){
    cout<<lista[i]<<endl;
}
}


int main()
{
    insereLista(1,0);
    insereLista(2,1);
    insereLista(6,2);
    insereLista(5,2);
    insereLista(4,2);
    insereLista(3,2);

    imprime();

    buscaLista(40);

    recuperaLista(50);


    return 0;
}
