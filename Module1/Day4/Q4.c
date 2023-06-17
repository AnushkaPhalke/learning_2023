#include <stdio.h>

int main() {

  // Declare variables
  int n, i, even_sum = 0, odd_sum = 0, diff;

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

  // Find the sum of even and odd elements
  for (i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      even_sum += arr[i];
    } else {
      odd_sum += arr[i];
    }
  }

  // Find the difference between the sum of even and odd elements
  diff = even_sum - odd_sum;

  // Print the difference
  printf("The difference between the sum of even and odd elements is %d\n", diff);

  // Return 0 to indicate successful termination
  return 0;
}
