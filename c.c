#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    char letra;
    struct Node* next;
}Node;


Node* init_node(){
    Node *node = malloc(sizeof(Node));
    node->letra = '\0';
    node->next = NULL;
    return node;
}

void append(Node *head, char letra){
    Node *cur = head;
    Node *sv;
   while (cur->next!= NULL){
        sv = cur;
        cur = cur->next;
    }
    cur->next = init_node();
    cur = cur->next;
    cur->letra = letra;
    cur->next = NULL;
}

void pop(Node *head){
    Node *sv;
    Node *cur = head;
    while (cur->next != NULL){
        sv = cur;
        cur = cur->next;
    }
    free(cur);
    sv->next = NULL;
}
int main(){
    Node *head = init_node();
    head->letra = 'b';
    append(head, 'p');
    append(head, 'd');
    append(head, 'x');
    pop(head);
    pop(head);
    while (head != NULL){
        printf("%c\n", head->letra);
        head = head->next;
    }
}