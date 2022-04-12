#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}snode;

void printList(snode *p){
    while(p!=NULL){
        printf("The data is %d \n",p->data);
        p=p->next;
    }
}

void ins_beg(snode *head,int item){
    snode *nw;
    nw=(snode*)malloc(sizeof(snode));
    nw->data=item;
    nw->next=NULL;
    if(head==NULL){      // If the list is empty.
        head=nw;
    }
    else{
        nw->next=head;
        head=nw;
    } 
}

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
    printList(p);
    ins_beg(n1,20);
    printf("After output...\n");
    printList(p);
    




    return 0;
}   