#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node {
    int conteudo;
    Node* proximo;
};

struct ListaSimplesmenteEncadeada {
    int cardinalidade;
    Node* inicio;
};

ListaSimplesmenteEncadeada* criaLista();
void destroiLista(ListaSimplesmenteEncadeada &lista);
void insere(ListaSimplesmenteEncadeada &lista, int conteudo);

// NOVAS FUNÇÕES
bool listaVazia(ListaSimplesmenteEncadeada &lista);
int numeroElementos(ListaSimplesmenteEncadeada &lista);
void mostrarLista(ListaSimplesmenteEncadeada &lista);
void inserirPosicao(ListaSimplesmenteEncadeada &lista, int valor, int pos);
void removerPosicao(ListaSimplesmenteEncadeada &lista, int pos);
void inverterLista(ListaSimplesmenteEncadeada &lista);

#endif