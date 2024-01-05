#include<stdio.h>
#include<stdlib.h>

int insert(){
    printf("hello");
};

int main(){

    struct node{
        int data;
        struct node* next;
        struct node* prev;
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

    //insert at head
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to be insert:" );
    scanf("%d",&newnode->data);
    head->prev = newnode;
    newnode->next = head;
    head = newnode;

    //insertion at end
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to be insert:" );
    scanf("%d",&newnode->data);
    tail->next = newnode;
    newnode->prev = tail;
    newnode->next = 0;
    newnode = tail;

    // inset at any
    int pos =  2, i = 0;
    
    if(pos<count){
        printf("none");
    } 
    else{
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data to be insert:" );
        scanf("%d",&newnode->data);
        tail = head;
        while(i<pos){
            tail = tail->next;
            i++;
        }
        newnode->prev = tail;
        newnode->next = tail->next;
        tail->next = newnode;
        newnode->next->prev = newnode;
    }
    


    tail = head;
    while(tail!=0){
        
        newnode -> prev = tail;
        printf("[%d]",newnode -> prev);
        printf("%d",tail->data);
        tail = tail->next;
        printf("(%d) -> ",tail);
        
        count++;
    }

    printf("\nTotal no of nodes: %d",count);
    // tail = head;
    // while(tail != 0){
    //     printf("%d -> ",tail->data);
    //     tail = tail -> next;
    //     printf("%d -> ",tail);
    //     count++;
    // }


    
    
}