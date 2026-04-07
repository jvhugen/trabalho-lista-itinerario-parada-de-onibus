#include <iostream>
#include "../include/linked_list.h"

using namespace std;

Lista criaLista() {
    Lista lista;
    lista.inicio = nullptr;
    lista.cardinalidade = 0;
    return lista;
}

void inserirInicio(Lista &lista, string nome) {
    Node* novo = new Node{nome, lista.inicio};
    lista.inicio = novo;
    lista.cardinalidade++;
}

void inserirFim(Lista &lista, string nome) {
    Node* novo = new Node{nome, nullptr};

    if (!lista.inicio) {
        lista.inicio = novo;
    } else {
        Node* temp = lista.inicio;
        while (temp->proximo)
            temp = temp->proximo;

        temp->proximo = novo;
    }

    lista.cardinalidade++;
}

void inserirPosicao(Lista &lista, string nome, int posicao) {
    if (posicao <= 0 || !lista.inicio) {
        inserirInicio(lista, nome);
        return;
    }

    Node* temp = lista.inicio;

    for (int i = 0; temp && i < posicao - 1; i++)
        temp = temp->proximo;

    if (!temp) {
        inserirFim(lista, nome);
        return;
    }

    Node* novo = new Node{nome, temp->proximo};
    temp->proximo = novo;
    lista.cardinalidade++;
}

void removerInicio(Lista &lista) {
    if (!lista.inicio) return;

    Node* temp = lista.inicio;
    lista.inicio = temp->proximo;
    delete temp;
    lista.cardinalidade--;
}

void removerFim(Lista &lista) {
    if (!lista.inicio) return;

    if (!lista.inicio->proximo) {
        delete lista.inicio;
        lista.inicio = nullptr;
    } else {
        Node* temp = lista.inicio;
        while (temp->proximo->proximo)
            temp = temp->proximo;

        delete temp->proximo;
        temp->proximo = nullptr;
    }

    lista.cardinalidade--;
}

bool buscar(Lista &lista, string nome) {
    Node* temp = lista.inicio;
    bool achou = false;

    while (temp) {
        if (temp->nome.find(nome) != string::npos) {
            cout << temp->nome << endl;
            achou = true;
        }
        temp = temp->proximo;
    }

    if (!achou)
        cout << "Nao encontrado\n";

    return achou;
}

void listar(Lista &lista) {
    Node* temp = lista.inicio;

    while (temp) {
        cout << temp->nome << " -> ";
        temp = temp->proximo;
    }

    cout << "NULL\n";
}

void listarReverso(Node* node) {
    if (!node) return;

    listarReverso(node->proximo);
    cout << node->nome << " -> ";
}

int contar(Lista &lista) {
    return lista.cardinalidade;
}