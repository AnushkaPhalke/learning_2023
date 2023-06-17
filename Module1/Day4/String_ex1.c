
#include <stdio.h>

void toggleCase(char *str) {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] += 32;
    } else if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] -= 32;
    }
  }
}

int main() {
  char str[1000];

  // Get the string from the user
  printf("Enter a string: ");
  fgets(str, 1000, stdin);

  // Toggle the case of the string
  toggleCase(str);

  // Print the string
  printf("The string with toggle case is: %s\n", str);

  // Return 0 to indicate successful termination
  return 0;
}
