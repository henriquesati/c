#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
 int number;
 struct node *next;
} node;


struct node* init_list(){
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

}

void printlist(node *list){
    while (1){
        printf("value: %i\n", list->number);
        if (list->next == NULL){
            break;
        }
        list = list->next;
    }
}

void insert(node *list, int position, int value){
    node *tmp = malloc(sizeof(node));
    tmp->number = value;
    node *currently_node = list;
    int count = 0;

      if(position == 0){
        int head_value = list->number;
        node *tmp_head = list;
        node *tmp_head_next_node = list->next;

        list->number = value;
    
        node *tmp = malloc(sizeof(node));
        tmp->number = head_value;
        list->next= tmp;
        tmp->next = tmp_head_next_node;
        count ++;
    }

    while(1){
        break;
        if (count == position){
            node *tmp2 = currently_node;
            node *current_next = currently_node->next;
            currently_node->next = tmp;
            break;
        }
        else{
            currently_node = currently_node->next;
            count ++;
        }
    }
}

int main(void){
    node *list = init_list();
    list->number = 12;
    populate(list, 2);
    populate(list, 3);
    populate(list, 4);
    printlist(list);

    // insert(list, 2, 1999);
    insert(list, 0, 55555);
    printlist(list);
    
};




