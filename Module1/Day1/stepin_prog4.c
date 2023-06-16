#include <stdio.h>

int main() {
  float n1, n2;
  char operator;

  printf("Enter Number1: ");
  scanf("%f", &n1);

  printf("Enter the operator: ");
  scanf(" %c", &operator);

  printf("Enter Number2: ");
  scanf("%f", &n2);

  float result;
  switch (operator) {
    case '+':
      result = n1 + n2;
      break;
    case '-':
      result = n1 - n2;
      break;
    case '*':
      result = n1 * n2;
      break;
    case '/':
      result = n1 / n2;
      break;
    default:
      printf("Invalid operator!\n");
      return 0;
  }

  printf("%.2f %c %.2f = %.2f\n", n1, operator, n2, result);

  return 0;
}
