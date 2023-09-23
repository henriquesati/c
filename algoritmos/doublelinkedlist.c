#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
 int number;
 struct node *next;
 struct node *previous;
} node;


struct node* init_list(){
    node *tmp = malloc(sizeof(node));
    if (tmp == NULL){
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    tmp->previous = NULL;
    tmp->next = NULL;
    return tmp;
}

void populate(node *list);


int main(){
    printf("Hello world");
}