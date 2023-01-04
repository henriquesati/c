#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
} node;

int main (void) {
    printf("hello world\n");
    maketree();

}

void maketree(void) {
    printf("making tree\n");
    node *root;
    node *lastchildl;
    node *lastchildr;

    node *tree = malloc(sizeof(node));
    tree->number = 3;
    tree->left = NULL;
    tree->right = NULL;
    root = tree;

    tree = malloc(sizeof(node));
    tree->number = 1;
    tree->left = NULL;
    tree->right = NULL;
    root->left = tree->number;
    lastchildl = tree;

    tree = malloc(sizeof(node));
    tree->number = 2;
    tree->left = NULL;
    tree->right = NULL;
    root->right = tree->number;
    lastchildr = tree;

    print_tree(root);
    

}

void print_tree(node *root) {
    if (root == NULL) {
        return;
    }
    printf("%i\n", root->number);
    printf("%i\n", root->left);
    printf("%i\n", root->right);
}