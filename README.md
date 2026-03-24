# Trabalho: Lista Itinerário - Parada de Ônibus

## Descrição

Este projeto consiste na configuração inicial de um sistema desenvolvido em C++ para o gerenciamento de itinerários de transporte coletivo.

A proposta estabelece uma base estruturada para futuras implementações, utilizando boas práticas de organização de código, com separação entre arquivos de código-fonte, cabeçalhos e testes.

O sistema será posteriormente utilizado para manipular uma lista de paradas de ônibus, com foco na utilização de estruturas de dados como listas encadeadas.

## Requisitos

Para compilar e executar o projeto, é necessário:

* Compilador GCC versão 9.0 ou superior
* Sistema operacional: Windows, Linux ou macOS
* IDE recomendada: Visual Studio Code

### Configuração no VSCode

* Instalar a extensão C/C++ (Microsoft)
* Instalar a extensão Code Runner (opcional)

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

## Estrutura do Projeto

```
src/       -> Código-fonte do projeto  
include/   -> Arquivos de cabeçalho (.h)  
tests/     -> Arquivos de teste  
main.cpp   -> Arquivo principal  
README.md  -> Documentação do projeto  
```

## Observações

Este repositório representa a etapa inicial (setup) do projeto, conforme especificado na atividade. As funcionalidades completas serão implementadas posteriormente.
