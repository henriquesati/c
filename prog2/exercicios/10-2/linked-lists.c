#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    char letra;
    struct Node *next;
} Node;


Node* init_node(){
    Node *node = malloc(sizeof(Node));
    node->letra = '\0';
    node->next = NULL;
    return node;
}

void append(Node *head, char letra){
    Node *cur = head;
   while (cur->next!= NULL){
        cur = cur->next;
    }
    cur->next = init_node();
    cur->next->letra = letra;
    cur->next->next = NULL;
}

Node* append_front(Node* head, char c){
    Node* new_head = init_node();
    new_head->letra = c;
    new_head->next = head;
    return new_head;
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

Node* pop_front(Node *head){
    Node *tmp = head->next;
    free(head);
    return tmp;

}



int main(){
    Node *head = init_node();
    head->letra = 'b';
    append(head, 'p');
    append(head, 'd');
    append(head, 'x');
    pop(head);
    pop(head);
    append(head, 'j');
    append(head, 'h');
    Node *p = head;
    while (p != NULL){
        printf("%c\n", p->letra);
        p = p->next;
    }
    puts("end");
    head = append_front(head, 'x');
    for(Node* p = head; p != NULL; p = p->next)
        printf("%c ", p->letra);
    puts("end");
    head = pop_front(head);
      for(Node* p = head; p != NULL; p = p->next)
        printf("%c ", p->letra);

}

