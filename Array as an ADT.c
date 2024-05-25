#include<stdio.h>
#include<stdlib.h>


struct array{
    int total_size;
    int used_size;
    int *ptr;
};


void create_array(struct array * a, int total_size, int used_size){
   a->total_size = total_size;
   a->used_size = used_size;
   a->ptr = (int *)malloc(total_size*sizeof(int));

}


void set_value(struct array * a){
    int n;
    for(int i=0 ; i < a->used_size ; i++){
        printf("Enter the element %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }

}


void show(struct array * a){
    for(int i=0 ; i < a->used_size ; i++){
        printf("%d\n", (a->ptr)[i]);
    }

}


int main(){
    struct array a1;
    create_array(&a1, 10, 2);
    set_value(&a1);
    show(&a1);
    return 0;
}