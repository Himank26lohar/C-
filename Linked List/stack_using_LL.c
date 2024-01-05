#include<stdio.h>
#include<stdlib.h>
void push(){

}

int main(){
    struct node{
        int data;
        struct node* next;
    };
    struct node* stack, *newnode, *temp, *top;
    top = 0;

    for(int i=0; i<3; i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode -> next = 0;
        
        if(top == 0){
            top = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }

    temp = top;
    while(temp != 0){
        printf("%d -> ",temp->data);
        temp = temp -> next;
    }

}