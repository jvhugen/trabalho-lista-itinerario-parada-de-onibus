#include <iostream>
#include "../include/linked_list.h"

using namespace std;

int main() {
    Lista lista = criaLista();

    inserirInicio(lista, "A");
    inserirFim(lista, "B");
    inserirFim(lista, "C");
    inserirPosicao(lista, "D", 1);

    listar(lista);

    removerInicio(lista);
    removerFim(lista);

    listar(lista);

    buscar(lista, "B");

    cout << contar(lista) << endl;

    listarReverso(lista.inicio);
    cout << "NULL\n";

    return 0;
}