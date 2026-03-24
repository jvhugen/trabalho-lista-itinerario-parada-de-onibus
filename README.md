# Trabalho: Lista Itinerário - Parada de Ônibus

## Descrição

Este projeto tem como objetivo iniciar o desenvolvimento de um sistema em C++ para gerenciamento de itinerários de transporte coletivo.

A proposta surgiu a partir de um problema identificado em uma empresa de transporte municipal, onde passageiros relataram falhas no cumprimento das rotas, como ônibus que não paravam corretamente nos pontos, pulavam paradas ou seguiam a ordem incorreta.

Como solução, será desenvolvido um sistema para auxiliar motoristas e supervisores de rota, permitindo o controle e organização das paradas por meio de uma lista encadeada.

Nesta etapa, o foco é apenas a configuração inicial do projeto (setup), preparando a estrutura necessária para a futura implementação das funcionalidades.

---

## Requisitos

Para compilar e executar o projeto, é necessário:

- Compilador GCC versão 9.0 ou superior  
- Sistema operacional: Windows, Linux ou macOS  
- IDE recomendada: Visual Studio Code  

### Configuração no VSCode

- Instalar a extensão C/C++ (Microsoft)  
- Instalar a extensão Code Runner (opcional)  

---

## Compilação e Execução

### Fluxo principal

Compilação:

```bash
g++ main.cpp -o programa
```

Execução:

```bash
./programa
```

No Windows, utilizar: `programa.exe`

---

## Testes

Os arquivos de teste devem ser adicionados na pasta `tests/`.

Compilação dos testes (exemplo):

```bash
g++ tests/teste.cpp -o teste
```

Execução dos testes:

```bash
./teste
```

---

## Estrutura do Projeto

```
src/       -> Código-fonte do projeto  
include/   -> Arquivos de cabeçalho (.h)  
tests/     -> Arquivos de teste  
main.cpp   -> Arquivo principal  
README.md  -> Documentação do projeto  
```
