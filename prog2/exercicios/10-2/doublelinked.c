#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    char letra; 
    struct Node *next;
    struct Node *previous;
} Node;

Node* init(char letra){
    Node *tmp = malloc(sizeof(Node));
    tmp->letra = letra;
    tmp->next = NULL;
    tmp-> = NULL;
}

Node* append(Node *head, char letra){
    Node *cur = head;

        while (cur->next != NULL){
            cur = cur->next;
        }
    
    Node *tmp = init(letra);
    tmp->next = NULL;
    tmp->previous = NULL;
    cur->next = tmp;
    tmp->previous = cur;
}




int main(){
    Node *head = init('A');
    append(head, 'B');
    append(head, 'H');
    printf("%c\n", head->letra);
    printf("%c\n", head->next->next->previous->letra);
}