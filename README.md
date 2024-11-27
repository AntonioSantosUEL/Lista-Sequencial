# README - Lista Dinâmica em C++

O programa implementa uma lista dinâmica em c++, utilizando alocação dinâmica de memória. O programa possui as funcionalidades de adicionar e remover elementos, além de ajustar a sua capacidade conforme o uso.


## Funcionalidades

* Adicionar
* Remover ultimo elemento da lista
* Ajuste automático de capacidade
* Impressão da lista (Foi utilizado valores teste)

## Estrutura - Classe ListaDinamica

* Construtor (ListaDinamica): Inicializa a lista com uma capacidade inicial de 50 elementos e aloca a memória necessária.

* Destruidor (~ListaDinamica): Libera a memória alocada quando a lista for destruída.

* Método adicionar(int valor): Adiciona um elemento à lista. Se a lista atingir sua capacidade máxima, ela dobra sua capacidade.

* Método remover(): Remove o último elemento da lista. Caso a lista tenha menos de um quarto de sua capacidade, a capacidade é reduzida pela metade.

* Método imprimir(): Imprime os elementos da lista na saída padrão.

