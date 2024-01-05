#include<iostream>
using namespace std;

typedef struct linknode{
    int data;
    struct linknode *next;
}
node;

node *start, *temp;
void create_list(){
    temp = (node *) malloc(sizeof(node));
    cout<<"Enter new value: ";
    cin>>temp -> data;
    temp -> next = NULL;
    if (start == NULL){
        start = temp;
    }
    else{
        node *ptr;
        ptr = start;
        while (ptr -> next!=NULL)
            ptr = ptr -> next;
        ptr->next = temp;
    }
}

void display(){
    if(start == NULL){
        cout<<"Underflow"<<endl;
    }
    else{
        temp = start;
        while(temp != NULL){
            cout<<temp->data;
        temp = temp->next;
        }
    }
}

void 

int main(){
    create_list;
    display;
}