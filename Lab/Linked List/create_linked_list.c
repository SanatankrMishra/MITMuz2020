#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}snode;

int main(){

    snode *n1,*p;
    n1=NULL;
    for(int i=0;i<3;i++){
        p=(snode *)malloc(sizeof(snode));
        printf("Enter the data: \n");
        scanf("%d",&p->data);
        if(n1==NULL){ // This is the first node.
            p->next=NULL;
            n1=p;
        }
        else{
            p->next = n1;
            n1=p;
        }
    }
    p=n1;
    while(p!=NULL){
        printf("The data is %d \n",p->data);
        p=p->next;
    }

    return 0;
}