#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{

    char letra;
    struct Node *next;
} Node;


Node* init(char letra){
    Node *node = malloc(sizeof(Node));
    node->letra = letra;
    node->next = NULL;
    return node;
}

void append_recur(Node *head, char letra){
    head->next == NULL? head->next=init(letra): append_recur(head->next, letra);
}
void append(Node *head, char letra){
    Node *tmp = init(letra);
    Node *cur = head;
    while (cur->next != NULL)
            cur = cur->next;
    cur->next = tmp;
}

void ordena(Node *head){
    Node *tmp = head;
    
    while (tmp!=NULL){
        for(Node* tmp2 = tmp->next; tmp2!=NULL; tmp2=tmp2->next){
            if((tmp->letra > tmp2->letra) > 0){
                char tmp_letra = tmp->letra;
                tmp->letra = tmp2->letra;
                tmp2->letra = tmp_letra;
                
            }
        }
        tmp = tmp->next;
    }
}


int main(){
    
    Node *head = init('y');
       append(head, 'h');
       append(head, 'x');
       append(head, 'u');
       append(head, 'k');
    for (Node *p = head; p!=NULL; p = p->next)
        printf("chat = %c\n", p->letra);
        puts("pos ordena");
        ordena(head);
           for (Node *p = head; p!=NULL; p = p->next)
        printf("chat = %c\n", p->letra);


}