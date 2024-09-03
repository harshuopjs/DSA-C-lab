//Harsh Kumar Singh
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}
void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = newNode(new_data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}
int main() {
    struct Node* head = NULL;
    int n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertAtBeginning(&head, data);
    }
    printf("Created linked list: ");
    printList(head);
    printf("\n");
    return 0;
}
