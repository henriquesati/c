#include <stdio.h>


#define SOMA_ARRAY(arr, len) ({\
    int soma = 0;\
    for (int i = 0; i < (len); i++) {\
        soma += (arr)[i];\
    }\
    soma;\
})

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int resultado = SOMA_ARRAY(vetor, tamanho);

    printf("A soma dos elementos do array é %d\n", resultado);

    return 0;
}