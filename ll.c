#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};
void traverse_ll(struct Node *head){
    while(head!= NULL){
        printf("\n%d", head->data);
        head = head->next;
    }
}

void insertAtFirst(struct Node *head, int data){
    printf("After Inserting Node at First Element\n");
    struct Node * p = (struct Node*)malloc(sizeof(struct Node *));
    
    p->data = data;
    p->next = head;
    traverse_ll(p);
    
}

void insertAtIndex(struct Node *p, int index, int data){

    printf("Now inserting an Element At Specified Index.....\n");

    
    struct Node * temp = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *tmp = (struct Node *)malloc(sizeof(struct Node *));
    temp->data = data;
    temp->next = p->next;
    tmp->next = p;
    int ct = 0;
    
    while(ct<index){
        temp->next = temp->next->next;
        tmp->next = tmp->next->next;
        if(ct == index -1){
            tmp->next->next = temp;
        }
        ct++;
    }

    traverse_ll(p);
    
}


int main(){

    struct Node * head = (struct Node*)malloc(sizeof(struct Node *));
    struct Node * second = (struct Node*)malloc(sizeof(struct Node *));
    struct Node * third = (struct Node*)malloc(sizeof(struct Node *));
    struct Node * fourth = (struct Node*)malloc(sizeof(struct Node *));
    struct Node * fifth = (struct Node*)malloc(sizeof(struct Node *));


    head->data = 20;
    head->next = second;
    second->data = 30;
    second->next = third;
    third->data = 40;
    third->next = fourth;
    fourth->data = 50;
    fourth->next = fifth;
    fifth->data = 60;
    fifth->next = NULL;

    
    traverse_ll(head);
    insertAtFirst(head, 70);
    
    insertAtIndex(head, 2, 75);
    // traverse_ll(head);










    

    return 0;
}