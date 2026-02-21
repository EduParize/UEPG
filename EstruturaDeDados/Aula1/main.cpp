#include <iostream>

using namespace std;
const int TAM = 5;
//const int vetor[TAM]={};


void insercaoVetor(int vetor[TAM])
{
    for(int i=0;i<TAM;i++){
        cout << "Insira o valor do elemento " << i+1 << " do vetor: " << endl;
        cin >> vetor[i];
    }
}

void exer1(int vetor[])
{
    for(int i=0;i<5;i++){
        cout << "elemento " << i+1 << ": "<< vetor[i] << endl;
    }
}

void exer2(int vetor[])
{
    for(int i=4;i>=0;i--){
        cout << "elemento " << i+1 << ": "<< vetor[i] << endl;
    }
}

void exer3(int vetor[])
{
    int maiorValor = vetor[0];
    for(int i=1;i<TAM;i++){
        if(vetor[i]>maiorValor){
            maiorValor=vetor[i];
        }
    }
    cout <<"Maior valor: " << maiorValor<<endl;
}

void exer4(int vetor[])
{
    int menorValor = vetor[0];
    for(int i=1;i<TAM;i++){
        if(vetor[i]<menorValor){
            menorValor=vetor[i];
        }
    }
    cout <<"Menor valor: " << menorValor<<endl;
}

void exer5(int vetor[])
{
    int soma = 0;
    for(int i=0;i<TAM;i++){
        soma += vetor[i];
    }
    cout <<"Soma de todos os valor: " << soma<<endl;
}

void exer6(int vetor[])
{
    int soma = 0;
    for(int i=0;i<TAM;i++){
        soma += vetor[i];
    }
    float media=(float)soma/TAM;
    cout <<"Media entre todos os valor: " << media<<endl;
}

void exerBonus(int vetor[])
{
    int j = TAM-1;
    int vetorB[TAM];

    for(int i=0;i<TAM;i++){
        vetorB[j]=vetor[i];
        j--;
    }

    for(int i=0;i<TAM;i++){
        cout << "Elemento " << i+1 << " do vetor B: "<< vetorB[i] << endl;
    }

}

int main()
{
    int vetor[TAM];
    insercaoVetor(vetor);

    cout << "Exercicio 1:" << endl;
    exer1(vetor);

    cout << endl;

    cout << "Exercicio 2:" << endl;
    exer2(vetor);

    cout << endl;

    cout <<"Exercicio 3:" << endl;
    exer3(vetor);

    cout << endl;

    cout <<"Exercicio 4:" << endl;
    exer4(vetor);

    cout << endl;

    cout <<"Exercicio 5:" << endl;
    exer5(vetor);

    cout << endl;

    cout <<"Exercicio 6:" << endl;
    exer6(vetor);

    cout << endl;

    cout <<"Exercicio Bonus:" << endl;
    exerBonus(vetor);


    return 0;
}
