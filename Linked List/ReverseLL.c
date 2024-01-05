// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     struct Node{
//         int data;
//         struct Node* next;
//     };

//     struct Node *head, *newnode, *temp;
//     head = 0;

//     for(int i=0; i<4; i++){
//         newnode = (struct Node*)malloc(sizeof(struct Node));
//         printf("Enter data: ");
//         scanf("%d",&newnode->data);
//         newnode->next = 0;
//         if(head == 0){
//             head = temp = newnode;
//         }
//         else{
//             temp->next = newnode;
//             temp = newnode;
//         }
//     }
//     temp = head;
//     while(temp!= 0){
//         printf("%d->",temp->data);
//         temp = temp->next;
//     }

//     //reverse
//     struct Node *prevnode, *currentnode, *nextnode;
//     while(nextnode != 0){
//         newnode = newnode->next;
//         currentnode->next = prevnode;
//         prevnode = currentnode;
//         currentnode = nextnode;
//     }
//     head = prevnode;

//     temp = head;
//     printf("Reversed linked list: ");
//     while(temp != 0){
//         printf("%d->",temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
   
//    return 0;

// }


#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main(){
    struct Node *head, *newnode, *temp;
    head = 0;

    // Creating the linked list
    for(int i=0; i<4; i++){
        newnode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if(head == 0){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }

    // Printing the original linked list
    temp = head;
    printf("Original linked list: ");
    while(temp != 0){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Reversing the linked list
    struct Node *prevnode = 0, *currentnode = head, *nextnode;
    while(currentnode != 0){
        nextnode = currentnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;

    // Printing the reversed linked list
    temp = head;
    printf("Reversed linked list: ");
    while(temp != 0){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("<\n");

    return 0;
}
