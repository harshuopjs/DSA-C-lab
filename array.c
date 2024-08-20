// here you can find a code to take input from user and perform INSERTION, DELETION AND TRAVERSING
#include <stdio.h>
int insert(int arr[], int *size, int pos, int element) {
    for (int i = *size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
    (*size)++;
    return arr[*size];
}
int delete(int arr[], int *size, int pos) {
    for (int i = pos - 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
int traverse(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    traverse(arr, size);
    int choice;
        printf("\n Enter your choice:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Traverse the array\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
        if (choice == 1) {
            int pos, element;
            printf("Enter the position to insert: ");
            scanf("%d", &pos);
            printf("Enter the element to insert: ");
            scanf("%d", &element);
            int a = insert(arr, &size, pos, element);
            printf("Array after insertion: ");
            traverse(arr, size);         
        } else if (choice == 2) {
            int pos;
            printf("Enter the position to delete: ");
            scanf("%d", &pos);
            delete(arr, &size, pos);
            printf("Array after deletion: ");
            traverse(arr, size);
        } else if (choice == 3) {
            traverse(arr, size);
        } else if (choice == 4) {
            return 0;
        } else {
            printf("Invalid choice\n");
        }
    return 0;
}
