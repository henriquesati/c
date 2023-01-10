#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct node
{
    char *key;
    char *value;
    struct node *next;
} node;

struct Hash
{
    struct Node *list[10];
};

int create_hash(char *key)
{
    int i;
    for (i = 0; key[i] != '\0'; i++)
    {
    }
    printf("%i\n", i);
    return i;
}

node *create_node(char *key, char *value)
{
    node *node = malloc(sizeof(node));
    if (node == NULL){
        printf("error");
    }

    node->key = key;
    node->value = value;
    node->next = NULL;
    return node;
}

void insertNode(struct Hash *hash, char *key, char *value){
    int index = create_hash(key);
    node *tmp = hash->list[index];

    if (tmp == NULL){
        hash->list[index] = create_node(key, value);
    }else{
        while (tmp){
            if (tmp->next == NULL){
                tmp->next = create_node(key, value);
                break;
            }
            tmp = tmp->next;
        }
    }
};

char *search(struct Hash *hash, char *key)
{
    int index = create_hash(key);
    node *tmp = hash->list[index];

    while (tmp){
        if (strcmp(tmp->key, key) == 0){
            
            return tmp->value;
        }
        tmp = tmp->next;
    }
    return "";
}

int main(void){
    struct Hash *hash = (struct Hash *)malloc(sizeof(struct Hash));
    for (int i = 0; i < 10; i++){
        hash->list[i] = NULL;
    }

    insertNode(hash, "pedro", "henrique");
    insertNode(hash, "lucas", "andrade");

    printf("%s\n", search(hash, "pedro"));
    printf("%s\n", search(hash, "lucas"));
}