#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    stack<int> pilha;
    queue<int> fila;
    priority_queue<int> filaP;
    vector<int> lista;
    vector<int>::iterator it;

    int valores[] = {100, 50, 10, 200, 20};
    for (int v : valores) {
        pilha.push(v);
        fila.push(v);
        filaP.push(v);
    }

    for (int i = 0; i < 3; i++) {
        pilha.pop();
        fila.pop();
        filaP.pop();
    }

    cout << "Topo da pilha: " << pilha.top() << endl;
    cout << "Maior da fila de prioridade: " << filaP.top() << endl;
    cout << "Inicio da fila: " << fila.front() << endl << endl;

    cout << "Tamanho da pilha: " << pilha.size() << endl;
    cout << "Tamanho da fila: " << fila.size() << endl;
    cout << "Tamanho da fila de prioridade: " << filaP.size() << endl << endl;

    pilha.pop(); pilha.pop();
    fila.pop();  fila.pop();
    filaP.pop(); filaP.pop();

    cout << "Pilha esta vazia: " << (pilha.empty() ? "Sim" : "Nao") << endl;
    cout << "Fila esta vazia: " << (fila.empty() ? "Sim" : "Nao") << endl;
    cout << "Fila de prioridade esta vazia: " << (filaP.empty() ? "Sim" : "Nao") << endl;

    cout << "\n-------------------------------------------\n" << endl;

    lista.push_back(100);
    lista.push_back(50);
    lista.push_back(10);
    lista.push_back(200);
    lista.push_back(20);

    lista.insert(lista.begin() + 2, 150);

    cout << "Lista: ";
    for (it = lista.begin(); it != lista.end(); it++)
        cout << *it << " ";
    cout << endl;

    sort(lista.begin(), lista.end());

    lista.erase(lista.begin() + 1);

    cout << "Lista apos ordenar e remover posicao 1: ";
    for (it = lista.begin(); it != lista.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}
