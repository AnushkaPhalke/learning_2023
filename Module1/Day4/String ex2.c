
#include <stdio.h>
#include <stdlib.h>

int main() {

  // Declare variables
  char str[100];
  int num;

  // Get the string from the user
  printf("Enter a string: ");
  fgets(str, 100, stdin);

  // Convert the string to an integer
  num = atoi(str);

  // Print the integer
  printf("The integer is: %d\n", num);

  // Return 0 to indicate successful termination
  return 0;
}
