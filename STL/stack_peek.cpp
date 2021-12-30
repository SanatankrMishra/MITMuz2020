#include <iostream>
using namespace std;

struct stack {
    int top;
    int size;
    int * arr;
};

int peek(struct stack *stk, int i){
    if((stk->top -i + 1) < 0){
        return -1;
    } else {
       
        int val = stk-> arr[stk->top - i + 1];
        return val;

    }
}



int main(){

    struct stack *st;
    st->size = 3;
    st->top = -1;
    st->arr[0] = 32;
    (st->top)++;
    st->arr[1] = 43;
    (st->top)++;
    st->arr[2] = 12;
    (st->top)++;

    printf("Peek at 1st position is %d\n", peek(st, 1));
    



    return 0;
}