#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
 int number;
 struct node *next;
} node;

struct node* init_node(){
    node *tmp = malloc(sizeof(node));
    if (tmp == NULL){
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
     return tmp;
}

void populate(node *list, int arg){
    node *tmp = malloc(sizeof(node));
    tmp->number = arg;
    tmp->next = NULL;
    list->next = tmp;
    printf("%i", arg);
    printf("test\n");

};

int main(void){
    node *list = init_node();
    populate(list, 2);
    populate(list, 3);
    populate(list, 4);
    printf("passou\n");

    node *pointer = list;
    while (pointer != NULL)
    {
        printf("%i\n", pointer->number);
        pointer = pointer->next;
    }
    
};