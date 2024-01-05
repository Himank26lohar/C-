#include<stdio.h>
#include<stdlib.h>


int main(){

    struct node{
        struct node* prev;
        int data;
        struct node* next;
    };

    struct node* head, *newnode, *tail;
    head = 0;
    int count = 0;

    printf("Enter data: ");
    for(int i=0; i<3; i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode -> next = 0;
        newnode -> prev = 0;

        if(head == 0){
            head = tail = newnode;
        }
        else{ 
            tail -> next = newnode;
            newnode -> prev = tail;
            tail = newnode;
        }
        
    }

    tail = head;
    while(tail!=0){
        // tail -> next = newnode;
        // printf("(%d) -> ",tail -> next);
        
        printf("%d",tail->data);
        tail = tail->next;

        // newnode -> prev = tail;
        // printf("[%d]",newnode -> prev);
        
        // count++;
    }

    // printf("\nTotal no of nodes: %d",count);
}