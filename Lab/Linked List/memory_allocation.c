#include <stdio.h>
#include <process.h>

typedef struct node{
    int data;
    struct node *next;
}snode;

int main(){

    int ch,item;
    snode *n1,*n2,*n3;
    n1=(snode*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&n1->data);
    n2=(snode*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&n2->data);
    n3=(snode*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&n3->data);


    printf("The data entered is %d \n",n1->data);
    printf("The data entered is %d \n",n2->data);
    printf("The data entered is %d \n",n3->data);
    

    return 0;
}