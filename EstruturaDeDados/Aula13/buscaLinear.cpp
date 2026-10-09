#include <iostream>
#include <algorithm>

using namespace std;
const int TAM = 20000;

int vetor[TAM];

int contaS=0, contaB=0;

void geraVetor() {

    int i;
    cout <<  "Gerando vetor randomico ordenado...." << endl;
    for (i=0; i<TAM; i++) {
        vetor[i]=rand()%(TAM*10);
    }
    sort(vetor,vetor+TAM);
}

void sequencial(int chave){
    int i=0;
    for(i=0; i<TAM; i++){
        contaS++;
        if(vetor[i]>=chave){
            break;
        }
    }
    if(i!=TAM && chave==vetor[i]){
        //cout << "Chave encontrada no indice " << i << endl;
        //cout << "Numero de comparacoes na busca sequencial: " << contaS << endl;
    }
    else{
        //cout << "Chave nao encontrada no vetor" << endl;
    }
}

void sequencialSentinela(int chave){
    int i=0;
    for(i=0; i<TAM; i++){
        if(vetor[i]>=chave){
            break;
        }
    }
    vetor[TAM] = chave;
    if(i!=TAM && chave==vetor[i]){
        // cout << "Chave encontrada no indice " << i << endl;
    }
    else{
        //cout << "Chave nao encontrada no vetor" << endl;
    }
}

void buscaBinaria(int chave){
    int inicio = 0;
    int fim = TAM-1;
    int meio;
    while(inicio<=fim){
        meio = (inicio+fim)/2;
        contaB++;
        if(vetor[meio]==chave){
            //cout << "Chave encontrada no indice " << meio << endl;
            //cout << "Numero de comparacoes na busca binaria: " << contaB << endl;
            return;
        }
        else if(vetor[meio]>chave){
            fim = meio-1;
        }
        else{
            inicio = meio+1;
        }
    }
    //cout << "Chave nao encontrada no vetor" << endl;
}
int main(){
    geraVetor();
    for(int i=0; i<1000; i++){
        int chaveBusca = rand()%(TAM*10);
        sequencial(chaveBusca);
        buscaBinaria(chaveBusca);
    }
    cout << "Numero de comparacoes medias na busca sequencial: " << (float) contaS/1000 << endl;
    cout << "Numero de comparacoes medias na busca binaria: " << (float) contaB/1000 << endl;
}
