#include<stdio.h>
#include<stdlib.h>

int main(){
    struct node{
        int data;
        struct node* next;
        struct node* prev;
    };
    struct node* head, *newnode, *tail, *nodeDEL;
    head = 0;

    for(int i=0; i<6; i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->prev = 0;
        newnode->next = 0;
        if(head == 0){
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    tail = head;
    while(tail!=0){
        
        newnode -> prev = tail;
        printf("[%d]",newnode -> prev);
        printf("%d",tail->data);
        tail = tail->next;
        printf("(%d) -> ",tail);
    }
    printf("\n");

    //deletion from any
    tail = head;
    int pos = 2;
    for(int j=1; j<pos; j++){
        tail = tail->next;
    }
    nodeDEL = tail->next;
    tail->next = nodeDEL->next;
    free(nodeDEL);
    
    tail = head;
    while(tail!=0){
        
        newnode -> prev = tail;
        printf("[%d]",newnode -> prev);
        printf("%d",tail->data);
        tail = tail->next;
        printf("(%d) -> ",tail);
    
    }
}