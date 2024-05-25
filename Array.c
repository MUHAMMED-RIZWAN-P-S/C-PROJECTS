#include<stdio.h>


void display(int array[], int size){
    for(int i = 0; i<size;i++){
    printf("%d\n", array[i]);
    }
}


int main(){
    int arr[100] = {0, 44, 45, 22, 2};
    display(arr, 4);
    return 0;
}