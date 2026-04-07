#include <iostream>
#include "include/linked_list.h"

using namespace std;

int main() {
    Lista lista = criaLista();
    int op;
    string nome;
    int pos;

    do {
        cout << "\n1 Inserir inicio\n";
        cout << "2 Inserir fim\n";
        cout << "3 Inserir posicao\n";
        cout << "4 Remover inicio\n";
        cout << "5 Remover fim\n";
        cout << "6 Buscar\n";
        cout << "7 Listar\n";
        cout << "8 Reverso\n";
        cout << "9 Contar\n";
        cout << "0 Sair\n";
        cin >> op;

        switch(op) {
            case 1:
                cin >> nome;
                inserirInicio(lista, nome);
                break;
            case 2:
                cin >> nome;
                inserirFim(lista, nome);
                break;
            case 3:
                cin >> nome >> pos;
                inserirPosicao(lista, nome, pos);
                break;
            case 4:
                removerInicio(lista);
                break;
            case 5:
                removerFim(lista);
                break;
            case 6:
                cin >> nome;
                buscar(lista, nome);
                break;
            case 7:
                listar(lista);
                break;
            case 8:
                listarReverso(lista.inicio);
                cout << "NULL\n";
                break;
            case 9:
                cout << contar(lista) << endl;
                break;
        }

    } while(op != 0);

    return 0;
}