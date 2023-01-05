#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
 int number;
 struct node *next;
} node;

int main (void) {
    makelist();
};

 void makelist (void) {
    node *flist;

    node *list = NULL;      //creates the pointer to the main list
    node *tmp = malloc(sizeof(node));   //creates a node
    tmp->number = 1;                    //give it a number
    tmp->next = NULL;                   //give it the adress to the next node or null
    list = tmp;                         //pass the node adress to list pointer
    flist = tmp;

    tmp = malloc(sizeof(node));         
    tmp->number = 2;
    tmp->next = NULL;
    flist->next = tmp;
    flist = tmp;

    tmp = malloc(sizeof(node));
    tmp->number = 3;
    tmp->next = NULL;
    flist->next= tmp;
    flist = tmp;

    tmp = malloc(sizeof(node));
    tmp->number = 4;
    tmp->next = NULL;
    flist->next = tmp;
    flist = tmp;
    
   
    node *pointer = list;
    while (pointer != NULL)
    {
        printf("%i\n", pointer->number);
        pointer = pointer->next;
    }

    printf("makelist");
    
    
}

