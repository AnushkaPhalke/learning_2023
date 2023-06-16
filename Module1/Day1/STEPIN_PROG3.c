#include <stdio.h>

int main() {
  int roll_no;
  char name[50];
  int marks_physics, marks_math, marks_chemistry;
  float total, percentage;

  printf("Enter the student's roll number: ");
  scanf("%d", &roll_no);

  printf("Enter the student's full name: ");
  scanf("%s", name);

  printf("Enter the student's marks in Physics: ");
  scanf("%d", &marks_physics);

  printf("Enter the student's marks in Math: ");
  scanf("%d", &marks_math);

  printf("Enter the student's marks in Chemistry: ");
  scanf("%d", &marks_chemistry);

  total = marks_physics + marks_math + marks_chemistry;
  percentage = (total / 300.0) * 100;

  printf("Roll No: %d\n", roll_no);
  printf("Name: %s\n", name);
  printf("Marks in Physics: %d\n", marks_physics);
  printf("Marks in Math: %d\n", marks_math);
  printf("Marks in Chemistry: %d\n", marks_chemistry);
  printf("Total Marks: %d\n", total);
  printf("Percentage: %.2f%%\n", percentage);

  return 0;
}
