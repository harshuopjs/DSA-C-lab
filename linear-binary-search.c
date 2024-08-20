#include <stdio.h>
// here we are defining linear search function
int linearSearch(int arr[], int n, int e) {
    for (int i = 1; i <= n; i++) {
        if (arr[i] == e) {
            return i;
        }
    }
    return -1;
}
// here we are defining binary search function
int binarySearch(int arr[], int l, int r, int x) {
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
      return mid;
    if (arr[mid] < x)
      l = mid + 1;
    else
      r = mid - 1;
  }
  return -1;
}
int main() {
    int arr[100], n, i, e, a;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &e);
    printf("Linear Search\n");
    a = linearSearch(arr, n, e);
    if (a != -1) {
        printf("%d found at position %d\n", e, a);
    } else {
        printf("%d not found in the array\n", e);
    }
    printf("Binary Search\n");
      int b = binarySearch(arr, 0, n - 1, e);
      if (b == -1)
        printf("Element not found in the array.\n");
      else
        printf("Element found at index %d.\n", a);
    return 0;
}
