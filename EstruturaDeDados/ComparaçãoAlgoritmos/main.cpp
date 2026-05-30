#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TAM = 40000;

int vetor[TAM];
int scratch[TAM];

// Gera tr�s tipos de vetores:
// ord->0 gera vetor rand�mico
// ord->1 gera vetor ordenado
// ord->2 gera vetor inversamente ordenado
// Qualquer outro valor de ord vai gerar um vetor rand�mico

//BUBBLE SORT
void bubbleSort(){
    int pass = 1, temp;
    bool sorted = false;
    while(!sorted && pass < TAM){
        sorted=true;
        for(int i=0;i<=TAM-pass-1;i++){
            if(vetor[i]>vetor[i+1]){
                temp=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=temp;
                sorted=false;
            }
        }
        pass++;
    }
}

int partition(int p, int r){
    int temp;
int piv = vetor[p];
int i = p-1;
int j= r+1;
while(true){
    do{
        j--;
    }while(vetor[j]>piv);

    do{
      i++;
    }while(vetor[i]<piv);

    if(i<j){
        temp=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=temp;
        }else{
        return j;
        }
    }
}

//QUICK SORT
void quickSort(int p, int r){
    if(p<r){
        int q = partition(p,r);
        quickSort(p, q);
        quickSort(q+1,r);
    }
}

//INSERTION SORT
void insertionSort(){
    int temp;
    for(int k=1;k<TAM;k++){
        int x=vetor[k];
        int i=k-1;
        bool found=false;
        while(!found && i>=0){
            if(vetor[i]>x){
                temp=vetor[i+1];
                vetor[i+1]=vetor[i];
                vetor[i]=temp;
                i--;
            }else{
                found=true;
            }
        }
    }
}

//SHELL SORT
void shellSort(){
    int temp;
    int k=1;
    do{
        k=k*2+1;
    }while(k<TAM);
    do{
        k=k/2;
        for(int i=k;i<TAM;i++){
            int j=i-k;
            bool found=false;
            while(!found && j>=0){
                if(vetor[j]>vetor[j+k]){
                    temp=vetor[j+k];
                    vetor[j+k]=vetor[j];
                    vetor[j]=temp;
                    j=j-k;
                }else{
                    found=true;
                }
            }
        }
    }while(k!=1);
}
//SELECTION SORT
void selectionSort(){
    int temp;
    for(int i=0;i<TAM-1;i++){
        int current=i;
        for(int k=i+1;k<TAM;k++){
            if(vetor[current]>vetor[k]){
                current=k;
            }
        }
        temp=vetor[i];
        vetor[i]=vetor[current];
        vetor[current]=temp;
    }
}

//MERGE SORT
void mergeSort(int lo, int hi){
    if(lo<hi){
        int mid=(lo+hi)/2;
        mergeSort(lo,mid);
        mergeSort(mid+1,hi);
        int L = lo;
        int H = mid+1;
        for(int k=lo;k<=hi;k++){
            if(L<=mid && (H>hi || vetor[L]<vetor[H])){
                scratch[k]=vetor[L];
                L++;
            }else{
                scratch[k]=vetor[H];
                H++;
            }
        }
        for(int k=lo;k<=hi;k++){
            vetor[k]=scratch[k];
        }
    }
}
void gera(int ord) {
    long i;

    switch (ord) {
    case 1:
        cout << "Gerando vetor ordenado...." << endl;
        for (i=0; i<TAM; i++)
            vetor[i]=i;
        break;
    case 2:
        cout << "Gerando vetor inversamente ordenado...." << endl;
        for (i=0; i<TAM; i++)
            vetor[i]=TAM-1-i;
        break;
    default:
        cout << "Gerando vetor randomico...." << endl;
        for (i=0; i<TAM; i++)
            vetor[i]=(rand()%TAM*10);
    }
}
void imprime(){
if(TAM==0){
        cout<<"Vetor vazio"<<endl;
    return;
}

for(int i=0;i<TAM;i++){
    cout<<vetor[i]<<endl;
}
}

void quickSortWrapper(){
    quickSort(0, TAM - 1);
}

void mergeSortWrapper(){
    mergeSort(0, TAM - 1);
}

float verificaTempo(void (*algoritmo)()){
    clock_t tempo1;
    clock_t tempo2;
    tempo1 = clock();
    algoritmo();
    tempo2 = clock() - tempo1;
    return (float) tempo2/CLOCKS_PER_SEC;
}

void testa(const char* nome, void (*algoritmo)(), int ord){
    gera(ord);
    cout << nome << ": " << verificaTempo(algoritmo) << " s" << endl;
    cout <<""<< endl;
}

int main() {
    srand(time(NULL));
    int ord = 0;

    testa("Bubble Sort", bubbleSort, ord);
    testa("Quick Sort", quickSortWrapper, ord);
    testa("Insertion Sort", insertionSort, ord);
    testa("Shell Sort", shellSort, ord);
    testa("Selection Sort", selectionSort, ord);
    testa("Merge Sort", mergeSortWrapper, ord);
}