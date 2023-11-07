#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    char letra;
    struct Node *next;
} Node;

Node* init_node(){
    Node *head = malloc(sizeof(Node));
    head->next = NULL; 
    return head;

}

Node* add_item(char letra, Node *head){
    head->letra;
    head->next = init_node();

}

void put_word(const char* string, Node *head){
    int i=0;
    Node *atual = head;
    while(string[i] != '\0'){
        printf("%c", string[i]);
        add_item(string[i], atual);
        atual = atual->next;
        i++; 
    }
}

void print_list(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("%c ", current->letra);
        current = current->next;
    }
    printf("\n");
}

int main(){
    Node *mynode = init_node();
    puts("kdkijd");
    put_word("macaquinhos", mynode);
    

}