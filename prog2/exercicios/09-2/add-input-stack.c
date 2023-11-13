#include <stdlib.h>
#include <stdio.h>

#define stack_size 1024

int main() {
    char stack[stack_size];
    int stack_n = 0;
    char input[2];  // 2 para armazenar o caractere e o caractere de nova linha (\n)

    while (stack_n != stack_size && fgets(input, sizeof(input), stdin) != NULL) {
        if (input[0] == '\n') {
            // Se a entrada for uma nova linha, saia do loop
            break;
        }

        stack[stack_n] = input[0];
        printf("Input recebido->%c\n", stack[stack_n]);
        stack_n++;
    }

    puts("while iterado");

    for (int i = 0; i < stack_n; i++) {
        printf("valor: %c\n", stack[i]);
    }

    return 0;
}
