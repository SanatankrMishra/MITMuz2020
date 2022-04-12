#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}snode;


int main(){

    snode *n1,*n2,*n3,*p;
    n1=(snode*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&n1->data);
    n2=(snode*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&n2->data);
    n3=(snode*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&n3->data);
    n1->next=n2;
    n2->next=n3;
    n3->next=NULL;
    p=n1;
    while(p!=NULL){
        printf("The data is %d \n",p->data);
        p=p->next;
    }
    

    return 0;
}