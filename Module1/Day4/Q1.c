#include <stdio.h>

int main() {

  // Declare variables
  int n, i, sum = 0;
  float avg;

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

  // Calculate the sum of the elements
  for (i = 0; i < n; i++) {
    sum += arr[i];
  }

  // Calculate the average of the elements
  avg = (float)sum / n;

  // Print the sum and average of the elements
  printf("The sum of the elements is %d\n", sum);
  printf("The average of the elements is %.2f\n", avg);

  // Return 0 to indicate successful termination
  return 0;
}
