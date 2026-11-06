    #include <iostream>
    #include <stack>
    #include <queue>
    #include <vector>
    #include <algorithm>
    #include <iostream>

    using namespace std;
    stack<int> pilha;
    queue<int> fila;
    priority_queue<int> filaP;
    vector<int> lista;
    vector<int>::iterator it;

    int main()
    {
        pilha.push(10);
        pilha.push(50);
        pilha.push(100);
        pilha.push(20);
        fila.push(10);
        fila.push(50);
        fila.push(100);
        fila.push(20);
        filaP.push(10);
        filaP.push(50);
        filaP.push(100);
        filaP.push(20);

        cout<<"Topo da pilha: "<< pilha.top()<<endl;
        cout<<"Maior da fila de prioridade: "<< filaP.top()<<endl;
        cout<<"Inicio da fila: "<< fila.front()<<endl;

        cout<<""<<endl;

        cout<<"Tamanho da pilha: "<< pilha.size()<<endl;
        cout<<"Tamanho da fila: "<< fila.size()<<endl;
        cout<<"Tamanho da fila de prioridade: "<< filaP.size()<<endl;

        cout<<""<<endl;

        fila.pop();
        fila.pop();
        pilha.pop();
        pilha.pop();
        filaP.pop();
        filaP.pop();

        cout<<""<<endl;

        cout<<"Topo da pilha: "<< pilha.top()<<endl;
        cout<<"Maior da fila de prioridade: "<< filaP.top()<<endl;
        cout<<"Inicio da fila: "<< fila.front()<<endl;

        cout<<""<<endl;

        cout<<"Tamanho da pilha: "<< pilha.size()<<endl;
        cout<<"Tamanho da fila: "<< fila.size()<<endl;
        cout<<"Tamanho da fila de prioridade: "<< filaP.size()<<endl;

        fila.pop();
        fila.pop();
        pilha.pop();
        pilha.pop();
        filaP.pop();
        filaP.pop();

        cout<<""<<endl;

        cout<<"Fila esta vazia: "<< (fila.empty() ? "Sim" : "Não")<<endl;
        cout<<"Pilha esta vazia: "<< (pilha.empty() ? "Sim" : "Não")<<endl;
        cout<<"Fila de Prioridade esta vazia: "<< (filaP.empty() ? "Sim" : "Não")<<endl;

        cout<<""<<endl;
        cout<<"-------------------------------------------"<<endl;
        cout<<""<<endl;
        lista.push_back(40);
        lista.push_back(10);
        lista.push_back(30);
        lista.push_back(20);
        lista.push_back(50);
        it=lista.begin();
        it+=2;
        lista.insert(it, 15);
        cout<<"Lista encadeada forma 1:"<<endl;
        for(int i=0;i<lista.size();i++){
            cout<<lista[i]<<" ";
        }
        cout<<"\n"<<endl;
        cout<<"Lista encadeada forma 2:"<<endl;
        for(it=lista.begin();it!=lista.end();it++){
            cout<<*it<<" ";
        }
        cout<<"\n"<<endl;
        cout<<"Lista encadeada ordenada:"<<endl;
        sort(lista.begin(), lista.end());
        for(int i=0;i<lista.size();i++){
            cout<<lista[i]<<" ";
        }
        cout<<"\n"<<endl;
        it=lista.begin();
        lista.erase(it);
        sort(lista.begin(), lista.end());
        for(int i=0;i<lista.size();i++){
            cout<<lista[i]<<" ";
        }
        cout<<"\n"<<endl;
        lista.clear();
        cout<<"Lista esta vazia: "<<(lista.empty()?"Sim":"Não")<<endl;
        return 0;
    }
