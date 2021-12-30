#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct stack * ptr){
    if(ptr->top == ptr->size -1 ){
        return 1;
    }else{
        return 0;
    }
}


int main(){
    struct stack *s;
    
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    if(isEmpty(s)){
        printf("This Stack is Empty.\n");
    }else{
        printf("This Stack is Not Empty.\n");
    }
    // Inserting Element in Stack

    s->arr[0] = 5;
    s->top ++;
    s->arr[1] = 4;
    s->top ++;
    s->arr[2] = 9;
    s->top ++;
    s->arr[3] = 7;
    s->top ++;
    s->arr[4] = 8;
    s->top ++;


    if(isEmpty(s)){
        printf("This Stack is Empty.\n");
    }else{
        printf("This Stack is Not Empty.\n");
    }

    if(isFull(s)){
        printf("This Stack is Full.\n");
    }else{
        printf("This Stack is not Full.\n");
    }
    
    
    return 0;
}