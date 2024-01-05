#include<stdio.h>
#include<stdlib.h>


int main(){

    struct Node{
        int data;
        struct Node *next;
    };

    struct Node *head, *tail, *newnode, *temp;
    head = 0;
    int i, count = 0;
    
    printf("Enter data: ");
    for(i=0; i<6; i++){
        newnode = (struct Node*)malloc(sizeof(struct Node));//assigning memeory
        // printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode -> next = 0;

        if(head == 0){
            head = temp = newnode;
        }
        else{
            temp -> next = newnode;
            temp = newnode;
        }
        temp->next = head;
    }


    // Inserting a node at the beginning
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter data to insert at the beginning: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    temp->next = newnode; // Update the last node's next to the new node
    head = newnode; // Update the head to the new node

    //Inserting a ndoe at thr end
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter what you want to insert at the end: ");
    scanf("%d", &newnode->data);
    newnode->next;

    temp = head;
    while(temp -> next != head){
        printf(" %d",temp->data);
        temp = temp -> next;
        printf("(%d) -> ",temp);
        count++;
    }
    printf("%d",temp->data);
    temp = temp -> next;
    printf("(%d) -> ",temp);
    printf("%d",head);
}
