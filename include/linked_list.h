#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <string>
using namespace std;

struct Node {
    string nome;
    Node* proximo;
};

struct Lista {
    int cardinalidade;
    Node* inicio;
};

Lista criaLista();

void inserirInicio(Lista &lista, string nome);
void inserirFim(Lista &lista, string nome);
void inserirPosicao(Lista &lista, string nome, int posicao);

void removerInicio(Lista &lista);
void removerFim(Lista &lista);

bool buscar(Lista &lista, string nome);

void listar(Lista &lista);
void listarReverso(Node* node);

int contar(Lista &lista);

#endif