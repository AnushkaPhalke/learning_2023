//Write a function to find biggest of 2 numbers using
//    - if else
 //   - ternary operator

  #include <stdio.h>

// Function to find the biggest of two numbers using if-else
int find_biggest_if_else(int x, int y) {
  if (x > y) {
    return x;
  } else
   {
    return y;
  }
}

// Function to find the biggest of two numbers using ternary operator
int find_biggest_ternary(int x, int y) {
  return x > y? x : y;
}

int main() {
  int x, y;

  // Take input from the user
  printf("Enter two numbers: ");
  scanf("%d %d", &x, &y);

  // Find the biggest number using if-else
  int biggest_if_else = find_biggest_if_else(x, y);

  // Find the biggest number using ternary operator
  int biggest_ternary = find_biggest_ternary(x, y);

  // Print the biggest number
  printf("The biggest number is %d\n", biggest_if_else);
  printf("The biggest number is %d\n", biggest_ternary);

  return 0;
}

