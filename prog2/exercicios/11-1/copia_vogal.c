#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char letra;
    struct Node *next;
} Node;

int is_vogue(char letra){
    if (letra == 'a')
        return 1;
    if (letra == 'e')
        return 1;
    if (letra == 'i')
        return 1;
    if (letra == 'o')
        return 1;
    if (letra == 'u')
        return 1;
    return 0;
}

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

Node *copia_vogal(Node *lista){
    Node *tmp = NULL;
    Node *lista_cur = lista;
    Node *tmp_tail;

    while (lista_cur != NULL){

        if(is_vogue(lista_cur->letra)){
                if (tmp==NULL){
                    tmp = init(lista_cur->letra);
                    tmp_tail = tmp;
                }
            tmp_tail->next = init(lista_cur->letra); //entender deferenciação
            tmp_tail = tmp_tail->next;
        }
        
        lista_cur = lista_cur->next;
    }
    tmp = tmp->next;
    return tmp;

}

int main(){
    Node *head = init('p');
    Node *nodi = init('a');
    doo(nodi, "bacaxi");
    doo(head, "edrogatinhos");
        for (Node *p = nodi; p!=NULL; p=p->next)
            printf("%c\n", p->letra);
    Node *copia = copia_vogal(head);
    puts("testando copia vogal");
       for (Node *p = copia; p!=NULL; p=p->next)
            printf("%c\n", p->letra);

}