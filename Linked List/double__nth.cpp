#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};

Node* head = NULL;

void insert(int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
}   

if (head == NULL) {
    head = newNode;
} 
else {
    Node *current = head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
}

int main(){
    
}