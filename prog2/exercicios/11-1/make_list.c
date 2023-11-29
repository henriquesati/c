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

void doo(Node *head, const char *string){
    int i=0;
    while (string[i] != '\0'){
        append_recur(head, string[i]);
        i++;
    }
}

Node* junta(Node* a1, Node* a2){
    Node *tmp = init('a');
    printf("\n\n\n\n");
    for (Node *p = a1; p!=NULL; p=p->next){
        append(tmp, p->letra);
    }
    // for (Node *p = a2; p!=NULL; p=p->next){
    //     append_recur(tmp, p->letra);
    // }
    
    return tmp;
}

int main(){
    Node *head = init('p');
    Node *nodi = init('a');
    doo(nodi, "bacaxi");
    doo(head, "edrogatinhos");
        for (Node *p = nodi; p!=NULL; p=p->next)
            printf("%c\n", p->letra);
    Node *result = junta(head, nodi);
    puts("noid");
    printf("result:%c", result->letra);
      for (Node *p = result; p!=NULL; result = result->next)
            printf("%c\n", p->letra);

}