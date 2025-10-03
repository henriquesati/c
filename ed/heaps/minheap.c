#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int n_elementos = 0;


int getPai(int i){
    int indice_pai = (int) floor((i-1)/2);
    if (indice_pai < 0 || i>=n_elementos){
        return -1;
    } else{
        return indice_pai;
    }
}


int getFilhoEsquerdo(int i){
    int indice_filho = (int) floor((2*i) + 1);
    
    if (indice_filho < i || indice_filho >= n_elementos || i>=n_elementos){
        return -1;
    } else {
        return indice_filho;
    }
}

int getFilhoDireito(int i){
    int indice_filho = (int) floor((2*i) + 2);
    if (indice_filho < i || indice_filho >= n_elementos || i >= n_elementos){
        return -1;
    } else {
        return indice_filho;
    }
}


void ajustarSubindo(int *heap, int pos){
    if (pos != -1){
        int indice_pai = getPai(pos);
        
        if (indice_pai != -1){
            if (heap[indice_pai] > heap[pos]){
                int aux = heap[indice_pai];
                heap[indice_pai] = heap[pos];
                heap[pos] = aux;
                ajustarSubindo(heap, indice_pai);
            }
        }
    }
}

void ajustarDescendo(int *heap, int pos){
    if (pos != -1 && getFilhoEsquerdo(pos) !=-1){
        int initial_target = getFilhoEsquerdo(pos);
        int possible_target = getFilhoDireito(pos);
        int target[2];

        if (possible_target!= -1 && heap[initial_target] > heap[possible_target]){
            target[0] = possible_target;
            target[1] = heap[possible_target];
        } else {
            target[0]= initial_target;
            target[1] = heap[initial_target];                     
        }
        if (heap[pos] > target[1]){
            int aux = heap[pos];
            heap[pos] = target[1];
            heap[target[0]] = aux;
            ajustarDescendo(heap, target[0]);
        }
    }
}

void inserir(int *heap, int x){
    heap[n_elementos] = x;
    n_elementos++;
    ajustarSubindo(heap, n_elementos-1);
}

int remover(int *heap){
    if (n_elementos == 0){
        return -1;
    }{
        int to_return = heap[0];
        heap[0] = heap[n_elementos-1];
        n_elementos--;
        ajustarDescendo(heap, 0);
        return to_return;
   }
}


void imprimirHeap(int *heap){
    if (n_elementos == 0){
        printf("Heap vazia\n");
        return;
    }
    for (int i = 0; i<n_elementos; i++){
        printf("%d", heap[i]);
            if(i < n_elementos - 1){
            printf(" | ");
        }
    }

}


int main() {
    int opcao, valor;
    int heap[100];

    do {
        printf("\n --- Menu heap ---\n");
        printf("\n 1 --- Inserir elemento ---\n");
        printf("\n 2 --- Remover elemento ---\n");
        printf("\n 3 --- Imprimir heap ---\n");
        printf("\n 0 - Sair \n");
        printf("\n Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                inserir(heap, valor);
                printf("Elemento %d inserido, Heap atual:\n", valor);
                imprimirHeap(heap);
                break;

            case 2:
                valor = remover(heap);
                if (valor != -1) {
                    printf("Elemento removido: %d\n", valor);
                    printf("Heap após remoção: \n");
                    imprimirHeap(heap);
                } else {
                    printf("Heap vazia!\n");
                }
                break;

            case 3:
                printf("Conteudo da heap:\n");
                imprimirHeap(heap);
                break;

            case 0:
                printf("Exit...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}