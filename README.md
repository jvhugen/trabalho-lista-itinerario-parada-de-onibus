# Sistema de Itinerário de Ônibus

## Descrição

Este projeto consiste no desenvolvimento de um sistema em C++ para gerenciamento de itinerários de transporte coletivo urbano, utilizando como estrutura de dados principal uma lista simplesmente encadeada.

A proposta surgiu a partir da identificação de problemas operacionais em uma empresa de transporte municipal, onde passageiros relataram falhas no cumprimento das rotas, como:

- Ônibus que não paravam corretamente nos pontos  
- Paradas sendo ignoradas  
- Ordem incorreta no trajeto  

Com base nesse cenário, o sistema foi projetado para auxiliar motoristas e supervisores no controle das rotas, permitindo a manipulação dinâmica das paradas de ônibus.

---

## Objetivo

Implementar um sistema interativo capaz de gerenciar uma rota de ônibus através de operações em uma lista encadeada, permitindo inserção, remoção, busca e visualização das paradas.

---

## Funcionalidades

O sistema oferece um menu interativo com as seguintes operações:

- Inserir parada no início da rota  
- Inserir parada no final da rota  
- Inserir parada em uma posição específica  
- Remover a primeira parada  
- Remover a última parada  
- Buscar parada por nome (com correspondência parcial)  
- Listar rota completa (ordem normal)  
- Listar rota em ordem inversa  
- Contar número total de paradas  

---

## Estrutura de Dados

O projeto utiliza uma lista simplesmente encadeada, onde cada nó representa uma parada de ônibus.

### Estrutura do nó

- Nome da parada (string)  
- Ponteiro para o próximo nó  

### Estrutura da lista

- Ponteiro para o início da lista  
- Contador de elementos (cardinalidade)  

---

## Estrutura do Projeto

```
.
├── include/          -> Arquivos de cabeçalho (.h)
│   └── linked_list.h
├── src/              -> Implementação das funções (.cpp)
│   └── linked_list.cpp
├── tests/            -> Testes do sistema
│   └── tests.cpp
├── main.cpp          -> Programa principal (menu interativo)
├── Makefile          -> Compilação via Make
├── CMakeLists.txt    -> Configuração com CMake
├── .gitignore        -> Arquivos ignorados pelo Git
├── README.md         -> Documentação principal
├── README.example.md -> Modelo de README
```

---

## Requisitos

Para compilar e executar o projeto, é necessário:

- Compilador GCC versão 9.0 ou superior  
- Sistema operacional: Windows, Linux ou macOS  
- Editor recomendado: Visual Studio Code  

---

## Configuração no VS Code

Recomenda-se instalar as seguintes extensões:

- C/C++ (Microsoft)  
- Code Runner (opcional)  

---

## Compilação e Execução

### Usando Makefile

Compilar:
```bash
make
```

Executar:
```bash
./main
```

---

### Executar testes

Compilar:
```bash
make test
```

Executar:
```bash
./tests
```

---

### Compilação manual

```bash
g++ src/linked_list.cpp main.cpp -o main
./main
```

No Windows:
```
main.exe
```

---

### Usando CMake

```bash
mkdir build
cd build
cmake ..
make
./main
```

---

## Testes

Os testes estão localizados na pasta `tests/` e verificam o funcionamento das principais operações da lista encadeada.

---

## Exemplo de uso

```
1 Inserir inicio
2 Inserir fim
3 Inserir posicao
4 Remover inicio
5 Remover fim
6 Buscar
7 Listar
8 Reverso
9 Contar
0 Sair
```

---

## Conceitos Aplicados

- Estruturas de Dados  
- Listas Encadeadas  
- Ponteiros em C++  
- Alocação dinâmica de memória  
- Modularização de código  

---

## Pontos de Análise e Justificativa

### 1. Qual variação de lista foi escolhida?

Foi utilizada uma lista simplesmente encadeada.

### 2. Por que essa estrutura é mais adequada para esse problema?

A lista simplesmente encadeada foi escolhida por ser simples e eficiente para representar uma sequência de paradas.

Ela permite inserções, remoções e percursos de forma direta, sem necessidade de ponteiros adicionais, tornando o código mais leve e fácil de manter.

### 3. Haveria algum cenário em que outra variação seria mais vantajosa?

Sim.

Uma lista circular seria útil em linhas de ônibus circulares, onde o trajeto reinicia automaticamente.

Uma lista duplamente encadeada seria vantajosa caso fosse necessário percorrer a rota nos dois sentidos com mais eficiência.

---

## Autor

Aluno: João Vitor Hugen  

Trabalho desenvolvido para a disciplina de Estrutura de Dados.