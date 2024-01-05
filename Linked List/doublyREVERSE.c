#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

int main() {
    struct node *head, *tail;
    head = 0;
    tail = head;

    printf("Enter data: ");
    for (int i = 0; i < 4; i++) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    struct node *current = head;
    while (current != NULL) {
        struct node *temp = current->next;
        current->next = current->prev;
        current->prev = temp;
        if (temp == NULL) {
            head = current;
        }
        current = temp;
    }

    current = head;
    while (current != NULL) {
        printf("[%d]", current->data);
        if (current->next != NULL) {
            printf(" -> ");
        }
        current = current->next;
    }

    return 0;
}
