// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     //defination of node structure
//     struct node{
//         int data;
//         struct node* next;  //stores address of next node
//     };

//     //declaration of variables 
//     struct node *head,*newnode,*temp;
//     head = 0; //initialising head to NULL
//     int choice;
//     int count = 0;

//     //loop to create linked list
//     while(choice){
//         //memory allocation for a new node
//         newnode = (struct node*)malloc(sizeof(struct node));
 
//         //getting data input from the user
//         printf("Enter data: ");
//         scanf("%d",&newnode->data);
//         newnode->next = 0;

//         //adding new node to a linked list
//         if(head == 0){
//             head = temp = newnode; // If the list is empty, make the new node the head
//         }
//         else{
//             temp->next = newnode;  //temp next me newnode ka address chala jayga
//             temp = newnode;  //updating temp to thr new node
//         }
//         printf("Do you want to continue");
//         scanf("%d",&choice);
//     }

//     // Traversing the linked list and printing the data
//     temp = head;
//     while(temp != 0){
//         printf("%d",temp->data);
//         temp = temp->next;
//         count++;
//     }

//     printf("%d",count);
//     // getch();
// }



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
    }


    //insert at head
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data to insert at beginning: ");
    scanf("%d",&newnode -> data);
    newnode -> next = head;
    head = newnode;
    

    //insert at tail
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data to insert at tail: ");
    scanf("%d",&newnode -> data);
    newnode -> next = 0;
    temp = head;
    while(temp -> next != 0){
        temp = temp -> next; 
    }
    temp -> next = newnode; 


   
    // head = newnode;
    
    //traversing using while loop
    temp = head;
    while(temp != 0){
        printf("%d -> ",temp->data);
        temp = temp -> next;
        // printf("%d -> ",temp);
        count++;
    }
    //traversing using for loop
    // for(temp; temp!=0; temp = temp -> next){
    //     printf("%d -> ",temp->data);
    //     count++;
    // }

    
    //insert at any position
    int pos=0;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter position: ");
    scanf("%d",&pos);
    if(pos>count){
        printf("Invalid");
    }
    else{
        
        temp = head;
        for(int i=1;i<pos;i++){
            temp = temp -> next;
        }
        

        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode -> next = temp -> next;
        temp -> next = newnode;
    }

    temp = head;
    while(temp != 0){
        printf("%d -> ",temp->data);
        temp = temp -> next;
        // printf("%d -> ",temp);
        count++;
    }

    printf("\n Total no. of node present: %d", count);

}