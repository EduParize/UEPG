#include <iostream>
#include <string>

using namespace std;
const int TAM = 10;
int pilha[TAM];
int topo = -1;


    void push(int valor){
        if(topo == TAM-1){
            //cout<<"Pilha sem espaco"<<endl;
            return;
        }
        topo++;
        pilha[topo]=valor;
        return;
    }

    bool vazia(){
        if(topo==-1){
            return true;
        }else{
        return false;
        }
    }

    void pop(){
        if(vazia()==true){
          //  cout<<"Pilha vazia"<<endl;
            return;
        }
        topo--;
        return;
    }

    void topoF(){
        cout<<"Valor do topo "<<": "<<pilha[topo]<<endl;
        return;
    }

    void imprime(){
        if(vazia()==true){
            cout<<"Pilha Vazia"<<endl;
        }
        for(int i=topo;i>-1;i--){
        cout<<pilha[i]<<endl;
        }
        return;

    }

    void verifica(){
    string expressao;
    getline(cin,expressao);
    int i=0;
    int tamanho = expressao.length();
    while(i<tamanho){
        if(expressao[i]=='('){
            push('(');
           }
        if(expressao[i]==')'){
            if(vazia()){
                cout<<"Expressao errada"<<endl;
                return;
            }else{
            pop();
            }
        }
        i++;
        }



    if(vazia()){
        cout<<"Expressao correta"<<endl;
    }else{
    cout<<"Expressao errada"<<endl;
    }
    }
int main()
{
verifica();
    return 0;
}
