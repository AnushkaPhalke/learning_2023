#include <stdio.h>

int main() {

  // Declare variables
  int n, i, min, max;

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

  // Initialize min and max
  min = max = arr[0];

  // Find the minimum and maximum elements
  for (i = 1; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    } else if (arr[i] > max) {
      max = arr[i];
    }
  }

  // Print the minimum and maximum elements
  printf("The minimum element is %d\n", min);
  printf("The maximum element is %d\n", max);

  // Return 0 to indicate successful termination
  return 0;
}
