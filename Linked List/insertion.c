#include<stdio.h>
#include<stdlib.h>

int main(){
    struct Node{
        int data;
        struct Node *next;
    };

    struct Node *head, *newnode, *temp;
    head = 0;
    int i, count = 0;
    
    printf("Enter data: ");
    for(i=0; i<3; i++){
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
    }

    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data to insert at beginning: ");
    scanf("%d",&newnode -> data);
    newnode -> next = head;
    head = newnode;

    temp = head;
    while(temp != 0){
        printf("%d -> ",temp->data);
        temp = temp -> next;
        printf("%d -> ",temp);
        count++;
    }
}