#include <iostream>
#include "include/linked_list.h"

using namespace std;

int main() {

    ListaSimplesmenteEncadeada* lista = criaLista();

    int opcao;
    int valor;
    int pos;

    do {

        cout << "\n===== MENU LISTA ENCADEADA =====\n";
        cout << "1 - Inserir no inicio\n";
        cout << "2 - Inserir em posicao\n";
        cout << "3 - Remover em posicao\n";
        cout << "4 - Mostrar lista\n";
        cout << "5 - Numero de elementos\n";
        cout << "6 - Verificar se lista esta vazia\n";
        cout << "7 - Inverter lista\n";
        cout << "8 - Destruir lista\n";
        cout << "0 - Sair\n";
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {

        case 1:
            cout << "Valor: ";
            cin >> valor;
            inserirPosicao(*lista, valor, 0);
            break;

        case 2:
            cout << "Valor: ";
            cin >> valor;
            cout << "Posicao: ";
            cin >> pos;
            inserirPosicao(*lista, valor, pos);
            break;

        case 3:
            cout << "Posicao para remover: ";
            cin >> pos;
            removerPosicao(*lista, pos);
            break;

        case 4:
            cout << "Lista: ";
            mostrarLista(*lista);
            break;

        case 5:
            cout << "Numero de elementos: "
                 << numeroElementos(*lista) << endl;
            break;

        case 6:
            if (listaVazia(*lista))
                cout << "Lista esta vazia\n";
            else
                cout << "Lista nao esta vazia\n";
            break;

        case 7:
            inverterLista(*lista);
            cout << "Lista invertida!\n";
            break;

        case 8:
            destroiLista(*lista);
            cout << "Lista destruida!\n";
            break;

        case 0:
            cout << "Saindo...\n";
            break;

        default:
            cout << "Opcao invalida\n";
        }

    } while (opcao != 0);

    return 0;
}