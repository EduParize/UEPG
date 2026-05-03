#include <iostream>

using namespace std;
const int TAM = 6;
int lista[TAM];
int tamanho = 0;

void insereLista(int valor){
    if(tamanho==TAM){
        cout<<"Lista Cheia"<<endl;
        return;
    }
    for(int i = 0; i < tamanho; i++){
        if(lista[i] == valor){
            cout << "O valor " << valor << " ja existe na lista." << endl;
            return;
        }
    }
    if(tamanho==0){
        lista[0]=valor;
    }else{
        for(int i=tamanho-1 ;i>=0;i--){
            if(valor<=lista[i]){
                lista[i+1]=lista[i];
                lista[i]=valor;
            }else{
                lista[i+1]=valor;
                break;
            }
        }
    }
    cout<<"Elemento Inserido"<<endl;
    tamanho++;
}

void recuperaLista(int posicao){
    if(tamanho==0){
        cout<<"Lista Vazia"<<endl;
        return;
    }
    if(posicao<0 || posicao>tamanho-1){
        cout<<"Posicao Invalida"<<endl;
        return;
    }
    cout<<"Valor da posicao "<< posicao<< ":" <<lista[posicao]<<endl;
}

void removeLista(int posicao){
    if(tamanho==0){
        cout<<"Lista Vazia"<<endl;
        return;
    }
    if(posicao<0 || posicao>tamanho-1){
        cout<<"Posicao Invalida"<<endl;
        return;
    }
    for(int i=posicao;i<tamanho;i++){
        lista[i]=lista[i+1];
    }
    cout<<"Elemento Removido"<<endl;
    tamanho--;
}

void buscaLista(int valor){
    if(tamanho==0){
        cout<<"Lista Vazia"<<endl;
        return;
    }
    for(int i=0;i<tamanho;i++){
        if(lista[i]==valor){
            cout<<"O valor "<< valor <<" esta na posicao "<<i<<endl;
            return;
        }
    }
    cout<<"O valor "<< valor <<" nao esta na lista"<<endl;
}

void imprime(){
    if(tamanho==0){
        cout<<"Lista Vazia"<<endl;
        return;
    }
    for(int i=0;i<tamanho;i++){
        cout<<lista[i]<<endl;
    }
}
int main()
{
    insereLista(10);
    insereLista(5);
    insereLista(5);
    insereLista(51);
    insereLista(67);

    imprime();
}