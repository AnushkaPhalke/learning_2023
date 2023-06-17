#include <stdio.h>

void reverseArray(int *arr, int n) {
  int i, j, temp;

  for (i = 0, j = n - 1; i < j; i++, j--) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

int main() {
  int n, i;

  // Get the number of elements in the array
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  // Create an array to store the elements
  int arr[n];

  // Get the elements of the array from the user
  for (i = 0; i < n; i++) {
    printf("Enter the element at index %d: ", i);
    scanf("%d", &arr[i]);
  }

  // Reverse the array
  reverseArray(arr, n);

  // Print the reversed array
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Return 0 to indicate successful termination
  return 0;
}
