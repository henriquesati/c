imprimirHeap#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n_elementos = 0;

int indiceFIlhoEsq(int i){
    int indice = (2 * i) + 1;
    
    if (i >= n_elementos || i >=n_elementos){
        return -1;
    } else {
        return indice;
    }
}

int indiceFilhoDir(int i){
    int indice = (2*i) + 2;

    if (i >= n_elementos || indice>= n_elementos ){
        return -1;
    } else {
        return indice;
    }
}


void ajustarDescendo(int *heap, int pos){
    if (pos != -1 && indiceFIlhoEsq(pos) != -1){
        int indiceMaiorFilho = indiceFIlhoEsq(pos);

            if(indiceFilhoDir(pos) != -1 && heap[indiceFilhoDir(pos)] >  heap[indiceMaiorFilho]){
                indiceMaiorFilho = indiceFilhoDir(pos);
            }
        if (heap[indiceMaiorFilho] > heap[pos]){
            int aux = heap[indiceMaiorFilho];
            heap[indiceMaiorFilho] = heap[pos];
            heap[pos] = aux;
            ajustarDescendo(heap, indiceMaiorFilho);
        }
    
    }

}



int indicePai(int x){
    int indice_pai = (int) floor((x-1)/2);

    if (indice_pai < 0 || x >= n_elementos){
        return -1;
    } else {
        return indice_pai;
    }
}


void ajustarSubindo(int  *heap, int pos){
    if (pos !=-1){

    int pai = indicePai(pos);
        if (pai !=-1){
            if (heap[pos] > heap[pai]){
                int aux = heap[pos];
                heap[pos] = heap[pai];
                heap[pai] = aux;
                ajustarSubindo(heap, pai);
            }
        }
    }
}



int remover(int *heap){
    if(n_elementos == 0){
        return -1;
    } else {
        int retorno = heap[0];
        heap[0] = heap[n_elementos-1];
        n_elementos--;
        ajustarDescendo(heap, 0);
        return retorno;
    }
}

void inserir(int *heap, int x){
    heap[n_elementos] = x;
    n_elementos++;
    ajustarSubindo(heap, n_elementos-1);
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