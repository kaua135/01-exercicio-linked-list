# 01 - Lista Simplesmente Encadeada (Linked List)

## Descrição
Exercício com Lista Simplesmente Encadeada (Linked List).

## Funcionalidades
- [x] Criação/Inicialização: criar uma lista vazia
- [x] Inserção: início da lista
- [x] Liberar lista (destroi): Liberar a memória da lista
- [x] Mostrar lista: imprime os elementos da lista
- [x] Lista Vazia: verifica se lista está vazia
- [x] Número de Elementos: quantidade de elementos na lista
- [x] Inserção: posição específica
- [x] Remoção: elemento (node) de posição específica
- [x] Inversão: Inverter os elementos da lista

## Pré-requisitos

## Ferramentas de Desenvolvimento

- **Compilador:** GCC/G++
- **Debugger:** GDB
- **Editor:** Visual Studio Code (opcional)

## Instalação

1. Clone o repositório.
2. Certifique-se de ter o `g++` e `gdb` instalados em seu sistema.

# Execução

## Compilação Manual

Para compilar o projeto manualmente via terminal:

```bash
g++ main.cpp src/linked_list.cpp -Iinclude -o main
./main
```

## Depuração (Debugging)

### Via VSCode (Interface Gráfica)

O projeto já está configurado com os arquivos `.vscode/tasks.json` e `.vscode/launch.json`.

1.  Abra a pasta do projeto no VSCode.
2.  Coloque breakpoints clicando na margem esquerda do código.
3.  Pressione **F5** ou acesse a aba **Run and Debug** e clique em "Debug Linked List".
4.  O VSCode irá compilar o projeto com símbolos de debug (`-g`) automaticamente antes de iniciar a sessão.

### Via CLI (Terminal com GDB)

1.  **Compilar com símbolos de debug:**
    ```bash
    g++ -g main.cpp src/linked_list.cpp -Iinclude -o main
    ```

2.  **Iniciar o GDB:**
    ```bash
    gdb ./main
    ```

3.  **Comandos básicos do GDB:**
    - `break main`: Define um ponto de parada na função principal.
    - `run` (ou `r`): Inicia a execução do programa.
    - `next` (ou `n`): Executa a próxima linha de código.
    - `step` (ou `s`): Entra em uma função.
    - `print <variavel>` (ou `p`): Exibe o valor de uma variável.
    - `continue` (ou `c`): Continua a execução até o próximo breakpoint.
    - `info breakpoints`: Lista todos os breakpoints.
    - `quit` (ou `q`): Sai do GDB.

4. **Fluxo de Exemplo**:

    ```
    (gdb) info breakpoints
    (gdb) break main
    (gdb) break criaLista()
    (gdb) run
    (gdb) next
    (gdb) next
    (gdb) print lista
    (gdb) quit
    ```

## Fluxo de Testes

Para compilar e rodar os testes:

```bash
g++ tests/tests.cpp src/linked_list.cpp -Iinclude -o tests_bin
./tests_bin
```

## Funcionamento

Primeiro rodar o codico pelo main, assim ele abrirá um menu com 8 opções
sendo elas:

"1 - Inserir no inicio
"2 - Inserir em posicao
"3 - Remover em posicao
"4 - Mostrar lista
"5 - Numero de elementos
"6 - Verificar se lista esta vazia
"7 - Inverter lista
"8 - Destruir lista
"0 - Sair

** Inserir no inicio **
Essa opção faz com que você insira alguma coisa no inicio da lista.

** Inserir em posicao **
Essa opção faz com que você escolha uma posição da lista e coloque algo nesta posição escolhida.

** Remover em posicao **
Remove a o objeto da posição escolhida.

** Mostrar lista **
Mostra a lista.

** Numero de elementos **
Fala o número de elementos na lista.

** Verificar se lista esta vazia **
verifica se a lista está vazia.

** Inverter lista **
ele inverte a sequencia da lista então por exemplo: 1,2,3,4,5 vai ficar 5,4,3,2,1.

** Destruir lista **
Destroi a lista.

** Sair **
você fecha o sistema, sai do codigo.

