#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define max_size 4

typedef struct{
    char data[max_size];
    int n;
    int first;
}Queue;

Queue new_queue(){
    Queue queue;
    queue.n = 0;
    queue.first=0;
    return queue;
}

void enqueue(Queue *queue, char letra){
    assert(queue->n < max_size);
    int i = (queue->first + queue->n)%max_size;
    queue->data[i] = letra;
    queue->n++;

}

int main(){

}