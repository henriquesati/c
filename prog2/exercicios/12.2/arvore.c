#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    struct Node *left;
    char letra;
    struct Node *right;
} Node;

Node* init_node(){
    Node *tree = malloc(sizeof(Node));
    tree->letra = '\0';
    tree->left = NULL;
    tree->right = NULL;
    return tree;
}

void add_node(Node *head, char letra){
    if (head->letra == '\0'){
        puts("ejiw");
        head->letra = letra;
        return;
    }
    Node *cur;
    cur = head->letra < letra? head->right: head->left;
    while (cur != NULL){
        char *save_state = cur->letra < letra? "right": "left";
        cur = cur->letra < letra? cur->right: cur->left;
    }
    cur = init_node();
    cur->letra = letra;
    head->left = cur;
}

// void append(Node *head, char letra)

// void print_tree(Node *head){
//     if (head != NULL) {
//         print_tree(head->left);
//         printf("%c ", head->letra);
//         print_tree(head->right);
//     }
// }

int main(){
    Node *tree = init_node();
    add_node(tree, 'B');
    printf("%c", tree->letra);
    add_node(tree, 'A');
    // print_tree(tree);
    printf("%c", tree->left->letra);

}