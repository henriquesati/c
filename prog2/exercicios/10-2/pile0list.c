#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
    char letra;
    struct Node *next;
} Node;


Node* init(char letra){
    Node *tmp = malloc(sizeof(Node));
    tmp->letra = letra;
    tmp->next = NULL;
}

void push(Node *head, char letra){
    Node *tmp = init(letra);
    tmp->next = NULL;

    Node *cur = head;
        while (cur->next != NULL){
            cur = cur->next;
            
        }
        
    cur->next = tmp;
}
void free_list(Node *head){
    while (head != NULL){
        Node *tmp = head;
        head = head->next;
        free(tmp);
    }

}
void rm_value(Node *head, char letra){

    Node *tmp = head;
    Node *sv;
    while (tmp != NULL){
        sv = tmp;
        tmp = tmp->next;
        if(tmp->letra == letra)
            break;
    }
    sv->next = tmp->next;
    free(tmp);
}
int is_empty(Node *head){
   return head == NULL? 1: 0;
}


int main(){
    Node *S = init('X');
    push(S, 'A');
    push(S, 'B');
    push(S, 'C');
    push(S, 'D');


    Node *p = S;
    printf("Valor de p: %p\n", (void *)p);
printf("Valor de S: %p\n", (void *)S);

    while(p!= NULL){
        printf("%c\n", p->letra);
        p = p->next;
    }
    
    rm_value(S, 'B');
    printf("Valor de p: %p\n", (void *)p);
    printf("Valor de S: %p\n", (void *)S);

    puts("ENDS");

    printf("%c\n", S->next->next->letra);
    puts("doul");
    p = S;
     while(p!= NULL){
        printf("%c\n", p->letra);
        p = p->next;
    }
}
