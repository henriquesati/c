#include <stdlib.h>
#include <stdio.h>


#include <stdio.h>
#include <stdlib.h>

// Estrutura para o nó da lista
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

// Função para criar um novo nó
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        perror("Erro ao alocar memória");
        exit(EXIT_FAILURE);
    }

    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

void append(Node** head, int data) {
    Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }

        current->next = newNode;
        newNode->prev = current;
    }
}

void printForward(Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void ordena(Node *head){
   for (Node *p = head; p!=NULL; p = p->next){
        int x = p->data;
        Node *q  = p;
            while(q->prev != NULL && q->prev->data > x){
                q->data = q->prev->data;
                q = q->prev;
            }
            q->data = x;
 }      
}


int main(){
     Node* head = NULL;

    // Adiciona 7 elementos à lista de maneira não ordenada
    append(&head, 42);
    append(&head, 17);
    append(&head, 8);
    append(&head, 30);
    append(&head, 55);
    append(&head, 92);
    append(&head, 12);
    printf("Lista da esquerda para a direita:\n");
    printForward(head);
    puts("Ordena");
    ordena(head);
    printForward(head);
}