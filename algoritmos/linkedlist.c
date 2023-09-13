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
    tmp->next = NULL;
    return tmp;
}

void populate(node *list, int arg){
    node *tmp = malloc(sizeof(node));
    tmp->number = arg;
    tmp->next = NULL;

    node *tail = list;
    while (tail->next != NULL){
        tail = tail->next;
    }
    tail->next = tmp;

};

int main(void){
    node *list = init_node();
    list->number = 1;
    populate(list, 2);
    populate(list, 3);
    populate(list, 4);
    
    node *list_to_iterate = list;
    while (1){
        printf("value: %i\n", list_to_iterate->number);
        if (list_to_iterate->next == NULL){
            break;
        }
        list_to_iterate = list_to_iterate->next;
    }


   
    
};