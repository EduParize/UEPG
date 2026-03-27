#include <iostream>

using namespace std;

const int TAM = 6;
int lista[TAM];
int tamanho = 0;

void insereLista(int valor){
    if(tamanho==TAM){
    cout<<"Lista cheia"<<endl;
    return;
    }
    if(tamanho==0){
        lista[0]=valor;
        tamanho++;
        return;
    }
    for(int i=tamanho;i>=0;i--){
            if(valor>=lista[i-1]){
                lista[i]=valor;
                tamanho++;
                return;
            }else{
                lista[i]=lista[i-1];
            }
    }

}

void recuperaLista(int posicao){

if(posicao>tamanho-1 || posicao<0){
    cout<<"Posicao invalida"<<endl;
    return;
}
if(tamanho==0){
    cout<<"Lista vazia"<<endl;
}
cout<<lista[posicao]<<endl;
return;
}

void removeValor(int valor){
    int quantidade=1;
if(tamanho ==0){
    cout<<"Lista vazia"<<endl;
    return;
}
for(int i=0;i<tamanho;i++){
    if(lista[i]==valor){
            for(int z=i+1;z<tamanho;z++){
                if(lista[i]==lista[z]){
                    quantidade++;
                }
            }
        for(int j=i+quantidade;j<=tamanho-1;j++){
            lista[j-quantidade]=lista[j];
        }
        tamanho--;
    }

}
}

void buscaLista(int valor){
    if(tamanho==0){
        cout<<"Lista vazia"<<endl;
        return;
    }
    for(int i=0;i<tamanho;i++){
        if(lista[i]==valor){
            cout<<"O "<< valor <<" esta na posicao: "<< i<<endl;
            if(lista[i]!=lista[i+1]){
                return;
            }
        }
    }
    cout<<"Valor "<< valor <<" nao encontrado na lista"<<endl;
}

void imprimeLista(){
    if(tamanho==0){
        cout<<"Lista vazia!"<<endl;
        return;
    }
    for(int i=0;i<tamanho;i++){
        cout<<lista[i]<<endl;
    }
}
void repeticoesLista(){
    if(tamanho==0){
        cout<<"Lista vazia"<<endl;
        return;
    }
    for(int i=0;i<tamanho-1;i++){
        if(lista[i]==lista[i+1]){
            cout<<"Tem valores repetidos"<<endl;
            return;
        }
    }
    cout<<"Nao tem valores repetidos!"<<endl;
}

int main()
{


    insereLista(20);
    insereLista(5);
    insereLista(7);
    insereLista(2);
    insereLista(1);
    insereLista(20);

    removeValor(20);

    imprimeLista();

    return 0;
}
