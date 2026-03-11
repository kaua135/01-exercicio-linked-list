#include "../include/linked_list.h"
#include <iostream>
#include <cstdlib>

using namespace std;

ListaSimplesmenteEncadeada* criaLista()
{
    ListaSimplesmenteEncadeada* lista = new ListaSimplesmenteEncadeada;

    lista->inicio = NULL;
    lista->cardinalidade = 0;

    return lista;
}

void destroiLista(ListaSimplesmenteEncadeada &lista)
{
    Node* atual = lista.inicio;
    Node* temp;

    while (atual != NULL) {
        temp = atual;
        atual = atual->proximo;
        free(temp);
    }

    lista.inicio = NULL;
    lista.cardinalidade = 0;
}

bool listaVazia(ListaSimplesmenteEncadeada &lista)
{
    return lista.inicio == NULL;
}

int numeroElementos(ListaSimplesmenteEncadeada &lista)
{
    return lista.cardinalidade;
}

void mostrarLista(ListaSimplesmenteEncadeada &lista)
{
    Node* aux = lista.inicio;

    if (aux == NULL) {
        cout << "Lista vazia" << endl;
        return;
    }

    while (aux != NULL) {
        cout << aux->conteudo << " ";
        aux = aux->proximo;
    }

    cout << endl;
}

void inserirPosicao(ListaSimplesmenteEncadeada &lista, int valor, int pos)
{
    if (pos < 0 || pos > lista.cardinalidade) {
        cout << "Posicao invalida" << endl;
        return;
    }

    Node* novo = (Node*) malloc(sizeof(Node));
    novo->conteudo = valor;

    if (pos == 0) {
        novo->proximo = lista.inicio;
        lista.inicio = novo;
    }
    else {
        Node* aux = lista.inicio;

        for (int i = 0; i < pos - 1; i++) {
            aux = aux->proximo;
        }

        novo->proximo = aux->proximo;
        aux->proximo = novo;
    }

    lista.cardinalidade++;
}

void removerPosicao(ListaSimplesmenteEncadeada &lista, int pos)
{
    if (lista.inicio == NULL || pos < 0 || pos >= lista.cardinalidade) {
        cout << "Posicao invalida" << endl;
        return;
    }

    Node* temp;

    if (pos == 0) {
        temp = lista.inicio;
        lista.inicio = lista.inicio->proximo;
    }
    else {
        Node* aux = lista.inicio;

        for (int i = 0; i < pos - 1; i++) {
            aux = aux->proximo;
        }

        temp = aux->proximo;
        aux->proximo = temp->proximo;
    }

    free(temp);
    lista.cardinalidade--;
}

void inverterLista(ListaSimplesmenteEncadeada &lista)
{
    Node* anterior = NULL;
    Node* atual = lista.inicio;
    Node* proximo;

    while (atual != NULL) {

        proximo = atual->proximo;
        atual->proximo = anterior;

        anterior = atual;
        atual = proximo;
    }

    lista.inicio = anterior;
}