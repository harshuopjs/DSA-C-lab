//harsh kumar singh
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* last = NULL;
void insertAtEnd(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (last == NULL) {
        last = newNode;
        last->next = last;
    } else {
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }
}
void insertAtBeginning(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (last == NULL) {
        last = newNode;
        last->next = last;
    } else {
        newNode->next = last->next;
        last->next = newNode;
    }
}
void deletelast(){
    struct Node* temp = last->next;
    struct Node* prev = last;
    while(temp->next != last->next){
        prev = temp;
        temp = temp->next;
    }
    prev->next = last->next;
    free(last);
    last = prev;
}
void displayList() {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = last->next;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("\n");
}
int main() {
    int choice, data;
    while (1) {
        printf("\nCircular Linked List Menu:\n");
        printf("1. Insert at end\n");
        printf("2. Insert at beginning\n");
        printf("3. Delete at last\n");
        printf("4. Display list\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to insert at end: ");
                scanf("%d", &data);
                insertAtEnd(data);
                break;
            case 2:
                printf("Enter data to insert at beginning: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;
            case 3:
                deletelast();
                break;
            case 4:
                displayList();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
