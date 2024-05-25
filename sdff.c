#include <stdio.h>
#include <stdlib.h>

// Node structure
struct queue {
    int data;
    struct queue* next;
};

struct queue *front, *rear;

void main(){
    printf("%p", *front);
}