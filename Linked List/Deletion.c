#include<stdio.h>
#include<stdlib.h>


int main(){

    struct Node{
        int data;
        struct Node *next;
    };

    struct Node *head, *newnode, *temp, *prev, *nodedel;
    head = 0;
    int i, count = 0;
    
    
    int till;
    printf("No. of nodes you want: "); scanf("%d",&till);
    printf("Enter data: ");
    for(i=0; i<till; i++){
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


    // temp = head;
    // while(temp!= 0){
    //     printf("%d -> ",temp->data);
    //     temp = temp -> next;
    //     // printf("%d -> ",temp);
    //     count++;
    // }printf("\n");

    
    //deleting an element from head in LL
    // temp = head;
    // head = head -> next;
    // free(temp);

    // printf("After deletion of elements: ");
    // while(temp != 0){
        
    //     printf("%d -> ",head->data);
    //     head = head -> next;
    //     // printf("%d -> ",temp);
    // }



    //deletion from tail
    // printf("After deletion of elements tail: ");
    // temp = head;
    // while(temp -> next != 0){
    //     prev = temp;
    //     temp = temp->next;
    // }    
    // if(temp == head){
    //     head = 0;
    //     free(temp);
    // }
    // else{
    //     prev->next = 0;
    // }free(temp);


    //deletion from any
    temp = head;
    int pos = 3;
    for(int i=1; i<pos; i++){
        temp = temp -> next;
    }
    nodedel = temp->next;
    temp->next = nodedel->next;
    free(nodedel);
    nodedel = NULL;

    temp = head;
    while(temp!= 0){
        printf("%d -> ",temp->data);
        temp = temp -> next;
        // printf("%d -> ",temp);
        count++;
    }printf("\n");

    printf("\nTotal no. of node present: %d", count);
    printf("\nTotal no. of node present: %d", nodedel);

}