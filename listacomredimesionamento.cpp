#include <iostream>
#include <cstdlib>
using namespace std;


class ListaDinamica {
private:
    int* vetor;      
    int capacidade;   
    int tamanho;

public:
    ListaDinamica() {
        capacidade = 50; //Capacidade
        tamanho = 0;
        vetor = (int*) malloc(capacidade * sizeof(int));
        if (vetor == nullptr) {
            std::cout << "Erro de alocação de memória!" << std::endl;
            exit(1);
        }
    }
    ~ListaDinamica() {
        free(vetor);  //Liberação de memória
    }
    void adicionar(int valor) {
        if (tamanho == capacidade) { 
            capacidade *= 2;  //Dobra capacidade
        }

        vetor[tamanho] = valor;
        tamanho++; 
    }

    void remover() {
        if (tamanho > 0) {
            tamanho--; 
            if (tamanho <= capacidade / 4 && capacidade > 50) {
                capacidade /= 2;  //Reduz capacidade
                vetor = (int*) realloc(vetor, capacidade * sizeof(int)); 
                if (vetor == nullptr) {
                    std::cout << "Erro de alocação de memória!" << std::endl;
                    exit(1);
                }
            }
        }
    }
    void imprimir() const {
        for (int i = 0; i < tamanho; ++i) {
            std::cout << vetor[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    ListaDinamica lista;
    //Teste
    lista.adicionar(11); 
    lista.adicionar(12);
    lista.adicionar(13);

    std::cout << "Lista após as adições: ";
    lista.imprimir();
    lista.remover();
    std::cout << "Lista após asremoção: ";
    lista.imprimir();


    return 0;
}